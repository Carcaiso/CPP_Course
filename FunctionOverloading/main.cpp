#include <iostream>
#include <string>
#include <vector>

void print(int);
void print(double);
void print(std::string);
void print(std::string, std::string);
void print(std::vector<std::string>);

int main(int argv, char *argc[])
{
    print(100);
    print('A'); // Char is alway promoted to int, so the funtion is the same as before. Should print 65 in ASCII
    print(123.5);
    print(10.0F); // Float are promoted to double
    print("Prova"); // C-style string is converted to a C++ string
    std::string prova{"Prova1"};
    print(prova, "Prova 2");

    std::vector<std::string> vec{"questo","è","un","vettore"};
    print(vec);

    return 0;
}

void print(int num)
{
    std::cout << num << std::endl;
}

void print(double num)
{
    std::cout << num << std::endl;
}

void print(std::string s)
{
    std::cout << s << std::endl;
}

void print(std::string s1, std::string s2)
{
    std::cout << s1 << std::endl;
    std::cout << s2 << std::endl;
}

void print(std::vector<std::string> v)
{
    std::cout << "Printing vector string: ";
    for(auto e:v){
        std::cout << e + " ";
    }

    std::cout << std::endl;
}