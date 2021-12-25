#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>
#include <string>

class Karen{
    void debug();
    void info();
    void warning();
    void error();
    void others();

    public:
    void complain(std::string level);
};

#endif