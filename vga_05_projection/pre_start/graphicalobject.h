#ifndef GRAPHICALOBJECT_H
#define GRAPHICALOBJECT_H

#include "shaderprogram.h"
#include "vertexbuffer.h"

class GraphicalObject
{
    ShaderProgram* m_program;
    VertexBuffer* m_buffer;

public:
    GraphicalObject(ShaderProgram* program, VertexBuffer* buffer);
    void render(QMatrix4x4 transformationMatrix);
};

#endif // GRAPHICALOBJECT_H
