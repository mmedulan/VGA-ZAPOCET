#ifndef VERTEXBUFFER_H
#define VERTEXBUFFER_H

#include <QOpenGLBuffer>
#include "Vertex.h"

class VertexBuffer
{
protected:
    QOpenGLBuffer m_buffer;
    QOpenGLBuffer m_indicesBuffer;

public:
    VertexBuffer();
    virtual void init() = 0;
    void bind();
};

#endif // VERTEXBUFFER_H
