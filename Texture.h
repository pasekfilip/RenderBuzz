#ifndef TEXTURE_H
#define TEXTURE_H

#include <string>

class Texture {
    public:
    unsigned int ID;
    int width, height, nrChannels;

    Texture(const std::string &path, bool hasAlpha = false);

    void Bind(unsigned int slot = 0) const;
    void Unbind() const;
};

#endif
