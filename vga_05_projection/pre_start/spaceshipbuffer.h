#ifndef SPACESHIPBUFFER_H
#define SPACESHIPBUFFER_H

#include "vertexbuffer.h"

class SpaceShipBuffer: public VertexBuffer
{
public:
    SpaceShipBuffer();
    void init() override;
};

#endif // SPACESHIPBUFFER_H
