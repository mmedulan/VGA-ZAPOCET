QT += qml quick

CONFIG += qmltypes
QML_IMPORT_NAME = OpenGLUnderQML
QML_IMPORT_MAJOR_VERSION = 1

HEADERS += \
    OpenGLScene.h \
    Vertex.h \
    cubebuffer.h \
    cubeobject.h \
    graphicalobject.h \
    position.h \
    rotation.h \
    shaderprogram.h \
    spaceshipbuffer.h \
    spaceshipobject.h \
    vertexbuffer.h
SOURCES += main.cpp \
    OpenGLScene.cpp \
    cubebuffer.cpp \
    cubeobject.cpp \
    graphicalobject.cpp \
    shaderprogram.cpp \
    spaceshipbuffer.cpp \
    spaceshipobject.cpp \
    vertexbuffer.cpp
RESOURCES += openglunderqml.qrc

target.path = $$[QT_INSTALL_EXAMPLES]/quick/scenegraph/openglunderqml
INSTALLS += target
