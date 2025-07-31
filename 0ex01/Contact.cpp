#include "Contact.hpp"
#include "Colors.hpp"
#include <iostream>

Contact::Contact() : id(0), first_name(""), last_name(""), nickname(""),
                     phone_number(""), darkest_secret("") {}

int Contact::get_id() const
{
    return id;
}

std::string Contact::get_first_name() const
{
    return first_name;
}

std::string Contact::get_last_name() const
{
    return last_name;
}

std::string Contact::get_nickname() const
{
    return nickname;
}

std::string Contact::get_phone_number() const
{
    return phone_number;
}

std::string Contact::get_darkest_secret() const
{
    return darkest_secret;
}

void Contact::set_id(int new_id)
{
    id = new_id;
}

void Contact::set_first_name(const std::string &name)
{
    first_name = name;
}

void Contact::set_last_name(const std::string &name)
{
    last_name = name;
}

void Contact::set_nickname(const std::string &name)
{
    nickname = name;
}

void Contact::set_phone_number(const std::string &number)
{
    phone_number = number;
}

void Contact::set_darkest_secret(const std::string &secret)
{
    darkest_secret = secret;
}

std::string Contact::get_shortened_version(const std::string& str)
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return std::string(10 - str.length(), ' ') + str;
}

void Contact::display() const
{
    std::cout << " " << id << GREEN << "|" << RESET
          << get_shortened_version(first_name) << GREEN << "|" << RESET
          << get_shortened_version(last_name) << GREEN << "|" << RESET
          << get_shortened_version(nickname) << std::endl;
}

void Contact::display_all() const
{
    std::cout << CYAN << BOLD << "ID: " << RESET << UNDERLINE << MAGENTA << id << RESET << "\n"
            << CYAN << BOLD << "First Name: " << RESET << UNDERLINE << MAGENTA << first_name << RESET << "\n"
            << CYAN << BOLD << "Last Name: " << RESET << UNDERLINE << MAGENTA << last_name << RESET << "\n"
            << CYAN << BOLD << "Nickname: " << RESET << UNDERLINE << MAGENTA << nickname << RESET << "\n"
            << CYAN << BOLD << "Phone Number: " << RESET << UNDERLINE << MAGENTA << phone_number << RESET << "\n"
            << CYAN << BOLD << "Darkest Secret: " << RESET << UNDERLINE << MAGENTA << darkest_secret << RESET << std::endl;

}
