#include <iostream>

int main(void)
{
    std::string str;
    std::string* strPtr;
    std::string& refStr = str; 

    str = "HI THIS IS BRAIN";
    strPtr = &str;
    std::cout << "The memory address of the string is: \t" << &str << "\n";
    std::cout << "The memory address held by strPtr is: \t" << strPtr << "\n";
    std::cout << "The memory address held by refStr is: \t"<< &refStr << "\n\n";
    std::cout << "The value of the string var is: \t" << str << "\n";
    std::cout << "The value pointed to by strPtr is: \t" << *strPtr << "\n";
    std::cout << "The value pointed to by refStr is: \t" << refStr << "\n";
    return (0);
}
