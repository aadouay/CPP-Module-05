#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain{
    private:
        std::string ideas[100];
    public:
        Brain();
        Brain(const Brain& other);
        Brain&  operator=(const Brain& other);
        const std::string& getIdea(int index) const;
        void setIdea(std::string idea, size_t index);
        ~Brain();
};
#endif