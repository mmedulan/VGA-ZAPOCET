#ifndef GRAPHICALOBJECT_H
#define GRAPHICALOBJECT_H

#include "shaderprogram.h"
#include "vertexbuffer.h"

class GraphicalObject
{
protected:
    ShaderProgram* m_program;
    VertexBuffer* m_buffer;

public:
    GraphicalObject(ShaderProgram* program, VertexBuffer* buffer);
    virtual void render(QMatrix4x4 transformationMatrix) = 0;
};

#endif // GRAPHICALOBJECT_H
