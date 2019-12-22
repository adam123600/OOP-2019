#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QStateMachine>
#include <QHistoryState>
#include <QFileDialog>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // tylko deklaratywny kod ( bez zadnych ifow )

    // TODO: Create state machine // done
    auto stateMachine = new QStateMachine(this); // podpiety glowny obiekt czyli okno
    // jak zxamkniemy okno  to i maszyna stanow sie usunie ( obiekt maszyny stanow)

    // TODO: Create states // done
    // konkretne stany podpiede pod maszynhe
    // auto greenState = new QState(stateMachine); //stany podpiede pod maszyne stanow
    // auto yellowState = new QState(stateMachine);
    // auto redState = new QState(stateMachine);
    // auto logState = new QState(stateMachine);

    auto unlockedState = new QState(stateMachine);
    auto lockedState = new QState(stateMachine);

    auto startupState = new QState(unlockedState);
    auto openState = new QState(unlockedState);
    auto errorState = new QState(unlockedState);
    auto viewState = new QState(unlockedState);
    auto editState = new QState(unlockedState);
    auto saveState = new QState(unlockedState);

    auto historyState = new QHistoryState(unlockedState);

    // TODO: Set appropriate 'assignProperty' // done
    // pidpisujemy jak maszyna ma wygladac w konkretnym stanie
    //greenState->assignProperty(ui->pbToggle, "text", "GREEN");
    //yellowState->assignProperty(ui->pbToggle, "text", "YELLOW");
    //redState->assignProperty(ui->pbToggle, "text", "RED");


    unlockedState->assignProperty(ui->pbToggle, "text", "Lock");
    unlockedState->assignProperty(ui->pbOpen, "enabled", "true");
    unlockedState->assignProperty(ui->pbSave, "enabled", "true");
    unlockedState->assignProperty(ui->teText, "enabled", "true");

    startupState->assignProperty(ui->pbOpen, "enabled", "true");
    startupState->assignProperty(ui->pbSave, "enabled", "false");
    startupState->assignProperty(ui->teText, "enabled", "false");
    startupState->assignProperty(ui->teText, "placeholderText", "Open file to start editing...");

    lockedState->assignProperty(ui->pbToggle, "text", "Unlock");
    lockedState->assignProperty(ui->pbOpen, "enabled", "false");
    lockedState->assignProperty(ui->pbSave, "enabled", "false");
    lockedState->assignProperty(ui->teText, "enabled", "false");

    errorState->assignProperty(ui->pbOpen, "enabled", "true");
    errorState->assignProperty(ui->pbSave, "enabled", "false");
    errorState->assignProperty(ui->teText, "enabled", "false");
    errorState->assignProperty(ui->teText, "placeholderText", "Error ocured. Open file to start editing...");

    viewState->assignProperty(ui->pbOpen, "enabled", "true");
    viewState->assignProperty(ui->pbSave, "enabled", "false");
    viewState->assignProperty(ui->teText, "enabled", "true");

    editState->assignProperty(ui->pbOpen, "enabled", "false");
    editState->assignProperty(ui->pbSave, "enabled", "true");
    editState->assignProperty(ui->teText, "enabled", "true");



    // TODO: Set state transitions including this class events and slots // done
    // konkretne przejscia miedzy stanami
    // greenState->addTransition(ui->pbToggle, SIGNAL(clicked()), redState);
    // redState->addTransition(ui->pbToggle, SIGNAL(clicked()), yellowState);
    // yellowState->addTransition(ui->pbToggle, SIGNAL(clicked()), logState);
    // TODO: add last trainsition // done
    // logState->addTransition(this, SIGNAL(done()), greenState);
    //connect(logState, SIGNAL(entered()), s, SLOT(log()));
    // po wejsciu do stanu logowania wowal sie thinasz fragment kodu

    unlockedState->addTransition(ui->pbToggle, SIGNAL(clicked()), lockedState);

    startupState->addTransition(ui->pbOpen, SIGNAL(clicked()), openState);

    connect(openState, SIGNAL(entered()), this, SLOT(open()));
    openState->addTransition(this, SIGNAL(opened()), viewState);
    openState->addTransition(this, SIGNAL(error()), errorState);

    //lockedState->addTransition(ui->pbToggle, SIGNAL(clicked()), unlockedState);
    lockedState->addTransition(ui->pbToggle, SIGNAL(clicked()), historyState);

    errorState->addTransition(ui->pbOpen, SIGNAL(clicked()), openState);
    errorState->addTransition(ui->pbToggle, SIGNAL(clicked()), lockedState);

    viewState->addTransition(ui->pbOpen, SIGNAL(clicked(bool)), openState);
    viewState->addTransition(ui->teText, SIGNAL(textChanged()), editState);

    editState->addTransition(ui->pbSave, SIGNAL(clicked()), saveState);

    connect(saveState, SIGNAL(entered()), this, SLOT(save()));
    saveState->addTransition(this, SIGNAL(saved()), viewState);
    saveState->addTransition(this, SIGNAL(error()), errorState);


    // TODO: Set initial state // done
    // ustalenie startowego stanu maszyny
    //stateMachine->setInitialState(greenState);
    stateMachine->setInitialState(unlockedState);
    unlockedState->setInitialState(startupState);


    // TODO: Start state machine // done
    // wystartowanie maszyny
    stateMachine->start();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::open()
{
    // TODO: Show file dialog
    // TODO: Open selected file
    // TODO: Emit 'error' if opening failed
    // TODO: Set text and emit 'opened' if suceeded
    // TODO: Save file name in 'fileName'

    fileName = QFileDialog::getOpenFileName(this, "Open a File", "/home/student");

    QFile file( fileName );
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        // nie udalo sie otworzyc pliku
        emit error();
    }

    QTextStream in(&file);
    QString line = in.readAll();
    ui->teText->setText(line);

    //qDebug() << "fileName: " << fileName;
    emit opened();
}

void MainWindow::save()
{
    // TODO: Open 'fileName' for writing
    // TODO: Emit 'error' if opening failed
    // TODO: Save file and emit 'saved' if succeeded

    QFile file(this->fileName);
    if ( !file.open(QIODevice::ReadWrite))
        emit error();

    else {
        QTextStream stream(&file);
        stream << ui->teText->toPlainText();
        file.close();
        emit saved();
    }
}

void MainWindow::log()
{
    qDebug() << "Inside log() function...";
    emit done();
}
