#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{

    if (argc != 4)
    {
		std::cout << "how to use ./replace <filename> <oldstring> <newstring>" << std::endl;
		return (1);
	}
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    std::string filename = argv[1];
    std::string entire;
    std::string line;
    if (!filename.length() || !s1.length() || !s2.length() )
	 {
		std::cout << "how to use ./replace <filename> <oldstring> <newstring>" << std::endl;
		return (1);
	} 
    std::ifstream file(argv[1]);
    if (!file.is_open())
    {
        std::cout << "Error: Could not open file '" << filename << "'." << std::endl;
        return 1;
    }
    std::string output = filename + ".replace"; 
    std::ofstream outputFile(output.c_str());
    if (!outputFile.is_open())
    {
        std::cout << "Error: Could not create output file '" << output << "'." << std::endl;
        return 1;
    }
    while (std::getline(file, line))
        entire += line + "\n";
    size_t pos = entire.find(s1);
    while (pos != std::string::npos)
    {
       entire.erase(pos, s1.length());
       entire.insert(pos, s2);
       pos = entire.find(s1, pos + s2.length());
    }
    outputFile << entire;
    outputFile.close();
    return 0;
}