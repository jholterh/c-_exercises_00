#include "Harl.hpp"

int main(int argc, char *argv[])
{
    Harl harl;

    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <level>" << std::endl;
        return 1;
    }

    int level = -1; // Initialize to invalid
    std::string levels(argv[1]);

    if (levels == "DEBUG")
        level = DEBUG;
    else if (levels == "INFO")
        level = INFO;
    else if (levels == "WARNING")
        level = WARNING;
    else if (levels == "ERROR")
        level = ERROR;

    switch (level)
    {
        case DEBUG:
            harl.complain("DEBUG");
            harl.complain("INFO");
            harl.complain("WARNING");
            harl.complain("ERROR");
            break;
        case INFO:
            harl.complain("INFO");
            harl.complain("WARNING");
            harl.complain("ERROR");
            break;
        case WARNING:
            harl.complain("WARNING");
            harl.complain("ERROR");
            break;
        case ERROR:
            harl.complain("ERROR");
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
    }
    return 0;
}
