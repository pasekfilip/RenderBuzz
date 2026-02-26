#version 430 core

out vec4 FragColor;

in vec3 Foo;
in vec3 Color;
in vec2 TextCoord;

uniform sampler2D ourTexture;

void main()
{
    FragColor = texture(ourTexture, TextCoord);
}
