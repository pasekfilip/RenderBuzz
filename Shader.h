#ifndef SHADER_H
#define SHADER_H

#include <glm/glm.hpp>
#include <string>

class Shader {
  public:
    unsigned int ID;
    Shader(const char *vertexPath, const char *fragmentPath);

    void use();

    void setBool(const std::string &name, bool value);
    void setInt(const std::string &name, int value);
    void setFloat(const std::string &name, float value);
    void setMat4(const std::string &name, glm::mat4 value);

  private:
    void checkShaderCompileErrors(unsigned int shader, std::string type);
};
#endif // SHADER_H
