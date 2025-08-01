#include "Harl.hpp"

Harl::Harl(void)
{
    _complaints[0] = &Harl::debug;
    _complaints[1] = &Harl::info;
    _complaints[2] = &Harl::warning;
    _complaints[3] = &Harl::error;

    _complaintLevels[0] = "DEBUG";
    _complaintLevels[1] = "INFO";
    _complaintLevels[2] = "WARNING";
    _complaintLevels[3] = "ERROR";
}

Harl::~Harl(void) {}

void Harl::debug(void)
{
    std::cout << "[ DEBUG ]\n"
              << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n";
}

void Harl::info(void)
{
    std::cout << "[ INFO ]\n"
              << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void Harl::warning(void)
{
    std::cout << "[ WARNING ]\n"
              << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
}

void Harl::error(void)
{
    std::cout << "[ ERROR ]\n"
              << "This is unacceptable! I want to speak to the manager now.\n";
}

void Harl::complain(std::string level)
{
    for (int i = 0; i < 4; ++i)
    {
        if (_complaintLevels[i] == level)
        {
            (this->*_complaints[i])();
            return;
        }
    }
    std::cout << "[ Probably complaining about insignificant problems ]\n";
}
