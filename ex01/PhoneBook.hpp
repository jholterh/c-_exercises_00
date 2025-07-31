#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
public:
    PhoneBook();
    void addContact(const Contact &contact);
    void displayContacts() const;
    Contact getContact(int id) const;
    int getContactCount() const;

private:
    Contact contacts[8];
    int contact_count;
};

#endif
