#include "VertexBuffer.h"
#include "include/glad/gl.h"

unsigned int VBO;

void VertexBuffer::initialize(float vertices[]) {
    glGenBuffers(1, &VBO);
    glBindBuffer(GL_ARRAY_BUFFER, VBO);
    glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
}

void VertexBuffer::remove(){
    glDeleteBuffers(1, &VBO);
}
