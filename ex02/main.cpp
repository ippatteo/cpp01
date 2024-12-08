#include <iostream>
#include <string>

int main() 
{
    std::string brain = "HI THIS IS BRAIN";

    std::string* stringPTR = &brain;
    std::string &stringREF = brain;


    std::cout << "Memory address of the string variable (&brain) " << &brain << std::endl;
    std::cout << "Memory address held by stringPTR " << stringPTR << std::endl;
    std::cout << "Memory address held by stringREF " << &stringREF << std::endl;
    std::cout << "value of brain " << brain << std::endl;
    std::cout << "value POINTED by stringPTR " <<  *stringPTR << std::endl;
    std::cout << "value pointed by stringREF " << stringREF << std::endl;
    return 0;
}
