QT += testlib
QT -= gui

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

TEMPLATE = app

SOURCES +=  tst_test_speed.cpp

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../../utils/release/ -lutils
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../../utils/debug/ -lutils
else:unix: LIBS += -L$$OUT_PWD/../../utils/ -lutils

INCLUDEPATH += $$PWD/../../utils
DEPENDPATH += $$PWD/../../utils

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../../utils/release/ -lutils
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../../utils/debug/ -lutils
else:unix: LIBS += -L$$OUT_PWD/../../utils/ -lutils

INCLUDEPATH += $$PWD/../../utils
DEPENDPATH += $$PWD/../../utils
