message(Building QNavApp)

TARGET = qnavapp

QML.source = $$PWD/qml
QML.target = .

RESOURCES.source = $$PWD/resources
RESOURCES.target = .

DEPLOYMENTFOLDERS += QML RESOURCES

QT += core network opengl xml quick multimedia

DEFINES += QMLJSDEBUGGER

QML_IMPORT_PATH += .

OTHER_FILES += \
    qml/*.qml

TSDIR = $${PWD}/resources/i18n
TSPATH = i18n
include(i18n.pri)

include(src/app/app.pri)
