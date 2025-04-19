#include <iostream>
#include <string>

int main() {
    string name;

    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << "Hello, " << name << "! Welcome to the world of C++." << std::endl;

    string answer;
    
    std::cout << "What is your favorite programming language? ";
    std::cin >> answer;
    std::cout << "That's great! " << answer << " is a powerful language." << std::endl;
    return 0;
}