#pragma once

#ifndef __HARL_HPP__
#define __HARL_HPP__

#include <iostream>
#include <string>

class Harl
{
    public:
        Harl(void);
        ~Harl(void);

        void complain(std::string level);
    
    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
        void (Harl::*_complaints[4])(void);
        std::string _complaintLevels[4];
        
};

#endif