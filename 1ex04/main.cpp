#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

int main(int argc, char **argv)
{
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <file> <str1> <str2>" << std::endl;
        return 1;
    }

    std::ifstream inputFile(argv[1]);
    if (!inputFile) {
        std::cerr << "Error: Could not open file " << argv[1] << std::endl;
        return 1;
    }

    std::stringstream buffer;
    buffer << inputFile.rdbuf();
    if (buffer.fail()) {
        std::cerr << "Error: Could not read from file " << argv[1] << std::endl;
        return 1;
    }
    std::string content = buffer.str();

    std::string str1 = argv[2];
    std::string str2 = argv[3];

    if (str1.empty()) {
        std::cerr << "Error: Search string (str1) cannot be empty." << std::endl;
        return 1;
    }

    if (str1 != str2) {
        size_t str1_len = str1.length();
        size_t pos = 0;
        while ((pos = content.find(str1, pos)) != std::string::npos) {
            content.erase(pos, str1_len);
            content.insert(pos, str2);
            pos += str2.length(); // Move past the inserted string to avoid infinite loop
        }
    }

    std::ofstream outputFile("Output.txt");
    if (!outputFile) {
        std::cerr << "Error: Could not open Output.txt for writing." << std::endl;
        return 1;
    }
    outputFile << content;
    if (outputFile.fail()) {
        std::cerr << "Error: Could not write to Output.txt." << std::endl;
        return 1;
    }

    return 0;
}


