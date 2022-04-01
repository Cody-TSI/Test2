#include <iostream>
#include <string>
int main()
{
    std::cout << "please input a string" << std::endl;
    std::string input;
    std::cin >> input;

    std::cout << input << std::endl;

    std::cout << "please input a age" << std::endl;
    int age;
    std::cin >> age;

    std::cout << age << std::endl;
    return 0;
}