#ifndef CAMERA_H
#define CAMERA_H

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

class Camera {
  public:
    glm::vec3 Position;
    float Zoom;

    Camera(glm::vec3 position = glm::vec3(0.0f, 0.0f, 3.0f))
        : Position(position), Zoom(45.0f) {}

    glm::mat4 GetViewMatrix() {
        return glm::lookAt(Position, Position + glm::vec3(0.0f, 0.0f, -1.0f), glm::vec3(0.0f, 1.0f, 0.0f));
    }

    glm::mat4 GetProjectionMatrix(float width, float height) {
        return glm::perspective(glm::radians(Zoom), width / height, 0.1f, 100.0f);
    }
};

#endif // !CAMERA_H
