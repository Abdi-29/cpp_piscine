#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>

class Contact {
private:
	std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;

public:
    std::string get_option(std::string str) const;
    Contact(void);
    ~Contact();
};

#endif
