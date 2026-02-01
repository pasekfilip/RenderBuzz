#version 430 core
layout (location = 0) in vec3 aPos;
layout (location = 1) in vec3 aColor;

uniform float position;

out vec3 Color;
out vec3 Foo;

void main()
{
    Color = aColor;
    Foo = aPos;
    gl_Position = vec4(aPos.x + position, aPos.y, aPos.z, 1.0);
}
