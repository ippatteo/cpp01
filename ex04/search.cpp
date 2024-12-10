#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
    std::ofstream outputFile("output.txt");
    //controlli
    std::ifstream file("file1.txt");
    std::string line;
    while (std::getline(file, line))
    {
        outputFile << line << std::endl;
    }
    return 0;
}