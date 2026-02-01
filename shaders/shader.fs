#version 430 core

in vec3 Foo;
in vec3 Color;

out vec4 FragColor; 

void main()
{
    FragColor = vec4(Foo, 1.0f);
}
