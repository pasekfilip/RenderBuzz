#ifndef ELEMENTBUFFER_H
#define ELEMENTBUFFER_H
#include <span>

class ElementBuffer {
  public:
    void initialize(std::span<unsigned int> indices);
    void remove();
};

#endif // ELEMENTBUFFER_H
