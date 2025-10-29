#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
class Animal{
    protected:
        std::string type;
    public:
        Animal();
        Animal(const std::string name);
        Animal(const Animal& other);
        Animal& operator=(const Animal& other);
        virtual void    makeSound();
        virtual const   std::string&    getType();
        virtual ~Animal();
};

#endif