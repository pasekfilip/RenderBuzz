#include "VertexBuffer.h"
#include "include/glad/gl.h"

unsigned int VBO;

void VertexBuffer::initialize(std::span<float> vertices) {
    glGenBuffers(1, &VBO);
    glBindBuffer(GL_ARRAY_BUFFER, VBO);
    glBufferData(GL_ARRAY_BUFFER, vertices.size_bytes(), vertices.data(), GL_STATIC_DRAW);
}

void VertexBuffer::remove() {
    glDeleteBuffers(1, &VBO);
}
