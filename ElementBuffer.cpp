#include "ElementBuffer.h"
#include "include/glad/gl.h"
#include <span>

unsigned int EBO;

void ElementBuffer::initialize(std::span<unsigned int> indices) {
    glGenBuffers(1, &EBO);
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO);
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, indices.size_bytes(), indices.data(), GL_STATIC_DRAW);
}

void ElementBuffer::remove() {
    glDeleteBuffers(1, &EBO);
}
