#include <iostream>
#include <string>
#include <vector>

void pass_by_value1(int num);
void pass_by_value2(std::string s);
void pass_by_value3(std::vector<std::string> v);
void print_vector(std::vector<std::string> v);

int main(int argc, char *argv[])
{
    int num{10};
    int another_num{20};

    std::cout << "num before calling pass_by_value1: " << num << std::endl;
    pass_by_value1(num);
    std::cout << "num after calling pass_by_value1: " << num << std::endl;

    std::cout << "another_num before calling pass_by_value1: " << another_num << std::endl;
    pass_by_value1(another_num);
    std::cout << "another_num after calling pass_by_value1: " << another_num << std::endl;

    std::string name{"Frank"};
    std::cout << "\nname before calling pass_by_value2: " << name << std::endl;
    pass_by_value2(name);
    std::cout << "name after calling pass_by_value2: " << name << std::endl;

    std::vector<std::string> stooges{"Lary", "Annah", "Joe"};
    std::cout << "\nstooges before calling pass_by_value3: " << std::endl;
    print_vector(stooges);
    pass_by_value3(stooges);
    std::cout << "\nstooges after calling pass_by_value3: " << std::endl;
    print_vector(stooges);
    
    std::vector<std::string> test {};
    test.push_back("aaaaaaaaa");
    print_vector(test);

    return 0;
}

void pass_by_value1(int num)
{
    num = 100;
}

void pass_by_value2(std::string s)
{
    s = "Changed";
}

void pass_by_value3(std::vector<std::string> v)
{
    v.clear(); // Delete all vector elements
}

void print_vector(std::vector<std::string> v)
{
    for (auto e : v)
    {
        std::cout << e;
    }

    std::cout << std::endl;
}
