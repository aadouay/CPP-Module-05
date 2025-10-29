#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Cat: public Animal{
    public:
        Cat();
        Cat(const std::string name);
        Cat(const Cat& other);
        Cat& operator=(const Cat& other);
        void    makeSound();
        ~Cat();
};

#endif