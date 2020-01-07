#include <QGuiApplication>
#include <QQmlApplicationEngine>

#include "demo.h"
#include "acceleration.h"
#include "speed.h"
#include "displacement.h"


int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    qmlRegisterType<Demo>("pl.gwizdz", 1, 0, "Demo");
    qmlRegisterType<acceleration>("pl.acceleration", 1, 0, "Acceleration");
    qmlRegisterType<displacement>("pl.displacement", 1, 0, "Displacement");
    qmlRegisterType<speed>("pl.speed", 1, 0, "Speed");

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
