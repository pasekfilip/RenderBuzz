#ifndef MESH_H
#define MESH_H

#include <glm/glm.hpp>
#include <vector>

struct Vertex {
    glm::vec3 Position;
    glm::vec3 Color;
    glm::vec2 TexCoords;
};

class Mesh {
  public:
    std::vector<Vertex> vertices;
    std::vector<unsigned int> indices;
    unsigned VAO;

    Mesh(std::vector<Vertex> vertices, std::vector<unsigned int> indices);
    void Draw();

  private:
    unsigned int VBO, EBO;
    void setupMesh();
};

#endif // MESH_H
