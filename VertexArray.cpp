#include "VertexArray.h"
#include "include/glad/gl.h"

unsigned int VAO;

void VertexArray::initialize() {
    glGenVertexArrays(1, &VAO);
    glBindVertexArray(VAO);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void *)0);
    glEnableVertexAttribArray(0);
}

void VertexArray::remove() {
    glDeleteVertexArrays(1, &VAO);
}
