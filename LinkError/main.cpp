#include <iostream>

extern int x;

int main(){
    std::cout << "Hello world" << std::endl;
    // This generate a link errors becuase during the linking phase x is not linkable
    std::cout << x;
    return 0;
}