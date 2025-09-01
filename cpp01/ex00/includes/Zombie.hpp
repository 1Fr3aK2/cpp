#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>
#include <iomanip>

typedef std::string t_string;


class Zombie
{
    private:
        t_string _name;
    public:
        Zombie(t_string name);
        ~Zombie();
        void announce(void);
};

#endif