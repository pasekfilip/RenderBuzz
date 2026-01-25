#ifndef VERTEXBUFFER_H
#define VERTEXBUFFER_H
#include <span>

class VertexBuffer {
  public:
    void initialize(std::span<float> vertices);
    void remove();
};

#endif // VERTEXBUFFER_H
