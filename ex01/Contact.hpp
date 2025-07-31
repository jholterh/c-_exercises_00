#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact
{
public:
    Contact();
    int get_id() const;
    std::string get_first_name() const;
    std::string get_last_name() const;
    std::string get_nickname() const;
    std::string get_phone_number() const;
    std::string get_darkest_secret() const;
    void set_id(int new_id);
    void set_first_name(const std::string &name);
    void set_last_name(const std::string &name);
    void set_nickname(const std::string &name);
    void set_phone_number(const std::string &number);
    void set_darkest_secret(const std::string &secret);

    void display() const;
    void display_all() const;

private:
    int id;
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;

    static std::string get_shortened_version(const std::string& str);
};

#endif // AWESOME_HPP
