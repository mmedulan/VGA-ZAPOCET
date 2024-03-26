#ifndef CUBEOBJECT_H
#define CUBEOBJECT_H

#include "graphicalobject.h"

class CubeObject : public GraphicalObject
{
public:
    CubeObject(ShaderProgram* program, VertexBuffer* buffer);
    void render(QMatrix4x4 transformationMatrix) override;
};

#endif // CUBEOBJECT_H
