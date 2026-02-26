mkdir -p build

if [[ ! -f "build/stb_image.o" ]]; then
    echo "Compiling stb_image.."
    g++ -c ./src/stb_image.cpp -I include/ -o build/stb_image.o
fi

if [[ ! -f "build/gl.o" ]]; then
    echo "Compiling GLAD/OpenGL loader..."
    g++ -c ./src/gl.c -I ./include/ -o build/gl.o
fi

g++ -c VertexBuffer.cpp -I include/ -std=c++20 -o build/VertexBuffer.o
g++ -c ElementBuffer.cpp -I include/ -std=c++20 -o build/ElementBuffer.o
g++ -c VertexArray.cpp -I include/ -std=c++20 -o build/VertexArray.o
g++ -c Shader.cpp -I include/ -std=c++20 -o build/Shader.o

echo "Compiling main.cpp..."
g++ -c main.cpp -I ./include/ -std=c++20 -o ./build/main.o

echo "Linking everything..."
g++ ./build/*.o -lglfw -ldl -o render_buzz

echo "Done!"

./render_buzz





