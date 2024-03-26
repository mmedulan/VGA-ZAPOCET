QT += qml quick

CONFIG += qmltypes
QML_IMPORT_NAME = OpenGLUnderQML
QML_IMPORT_MAJOR_VERSION = 1

HEADERS += \
    OpenGLScene.h \
    Vertex.h \
    graphicalobject.h \
    shaderprogram.h \
    spaceshipbuffer.h \
    vertexbuffer.h
SOURCES += main.cpp \
    OpenGLScene.cpp \
    graphicalobject.cpp \
    shaderprogram.cpp \
    spaceshipbuffer.cpp \
    vertexbuffer.cpp
RESOURCES += openglunderqml.qrc

target.path = $$[QT_INSTALL_EXAMPLES]/quick/scenegraph/openglunderqml
INSTALLS += target
