#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal{
    private:
    Brain *mind;
    public:
        Dog();
        Dog(const std::string name);
        Dog(const Dog& other);
        Dog& operator=(const Dog& other);
        void makeSound()const;
        ~Dog();
};

#endif