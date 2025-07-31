#include "Contact.hpp"
#include "PhoneBook.hpp"
#include "Colors.hpp"
#include <iostream>
#include <string>
#include <limits>

std::string get_valid_input(const std::string& prompt)
{
    std::string input;

    while (true) {
        std::cout << prompt;
        std::getline(std::cin, input);
        if (input.empty()) {
            std::cout << BOLD << RED << "Input cannot be empty. Please try again.\n" << RESET;
            continue;
        }
        return input;
    }
}

void add_contact(PhoneBook &phoneBook)
{
    Contact newContact;
    std::string input;

    newContact.set_first_name(get_valid_input("Enter first name: \n"));
    newContact.set_last_name(get_valid_input("Enter last name: \n"));
    newContact.set_nickname(get_valid_input("Enter nickname: \n"));
    newContact.set_phone_number(get_valid_input("Enter phone number: \n"));
    newContact.set_darkest_secret(get_valid_input("Enter darkest secret: \n"));
    phoneBook.addContact(newContact);
}

void search_contacts(PhoneBook &phoneBook)
{
    int id;
    if (phoneBook.getContactCount() == 0) {
        std::cout << BOLD << RED << "No contacts available. Please add a contact first.\n" << RESET;
        return;
    }
    while (true)
    {
        phoneBook.displayContacts();
        std::cout << "Enter the " << YELLOW << UNDERLINE << "ID" << RESET << " of the contact you want to view: \n";

        while (!(std::cin >> id)) {
            std::cout << BOLD << RED << "Invalid input. Please enter a valid ID: \n" << RESET;
            std::cin.clear(); // Clear error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
        }
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear newline

        if (id >= 0 && id < phoneBook.getContactCount()) {
            phoneBook.getContact(id).display_all();
            break; // Exit after successful display
        } else {
            std::cout << BOLD << RED << "Invalid ID. Please try again.\n" << RESET;
        }
    }
}


int start_dialogue(PhoneBook &phoneBook)
{
    bool failed = false;
    std::string input;
    while (true)
    {
        if (!failed)
            std::cout << "Type " << YELLOW << UNDERLINE << "'ADD'" << RESET << " to add a contact, " << YELLOW << UNDERLINE << "'SEARCH'" << RESET << " to search for contacts, or " << YELLOW << UNDERLINE << "'EXIT'" << RESET << " to exit the program.\n";
        std::getline(std::cin, input);
        if (input == "ADD")
        {
            add_contact(phoneBook);
            failed = false;
        }
        else if (input == "SEARCH")
        {
            search_contacts(phoneBook);
            failed = false;
        }
        else if (input == "EXIT")
        {
            return 1;
        }
        else
        {
            failed = true;
            std::cout << BOLD << RED << "Invalid command. Please try again.\n" << RESET;
        }
    }
}

int main()
{
    PhoneBook phoneBook;
    std::cout << BLUE << "Welcome to the PhoneBook application!\n" << RESET;
    while (start_dialogue(phoneBook) != 1)
        ;
    std::cout << BLUE << "Exiting the PhoneBook application. Goodbye!\n" RESET;
    return 0;
}