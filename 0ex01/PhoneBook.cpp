#include "PhoneBook.hpp"
#include <iostream>
#include <stdexcept>

PhoneBook::PhoneBook() : contact_count(0) {}

void PhoneBook::addContact(const Contact &contact)
{
    Contact cpy = contact;
    cpy.set_id(contact_count % 8);
    contacts[contact_count % 8] = cpy;
    if (contact_count < 8)
        ++contact_count;
}

void PhoneBook::displayContacts() const
{
    for (int i = 0; i < contact_count; ++i)
    {
        contacts[i].display();
    }
}

Contact PhoneBook::getContact(int id) const
{
    if (id < 0 || id >= contact_count)
    {
        throw std::out_of_range("Invalid contact ID");
    }
    return contacts[id];
}

int PhoneBook::getContactCount() const
{
    return contact_count;
}

