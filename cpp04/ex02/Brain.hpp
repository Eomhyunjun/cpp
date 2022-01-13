#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {
    std::string ideas[100];

    public:
        Brain();
        Brain(Brain const& other);
        ~Brain();
        Brain& operator=(Brain const& other);

        const std::string& getIdeas(int index) const;
        void setIdeas(int index, std::string &idea);
};

#endif