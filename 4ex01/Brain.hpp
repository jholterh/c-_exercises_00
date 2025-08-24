#pragma once
#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
    public:
        Brain();
        Brain(const Brain &copy);
        Brain &operator=(const Brain &other);
        ~Brain();

        const std::string& getIdea(int index) const;
        void setIdea(int index, const std::string& idea);

    private:
        std::string ideas[100];
};

#endif