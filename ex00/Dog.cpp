#include "Dog.hpp"

Dog::Dog():Animal(){
    std::cout << "the defulte Dog constractor is caled\n";
}

Dog::Dog(const std::string name):Animal(name){
    std::cout << "the overlading Dog constractor is caled\n";
}

Dog::Dog(const Dog& other){
    std::cout << "the Dog Copy constructor called" << std::endl;
    type = other.type;
}

Dog& Dog::operator=(const Dog& other){
    std::cout << "The Dog Copy assignment operator called" << std::endl;
    type = other.type;
    return *this;
}

void    Dog::makeSound()const{
    std::cout << "Dog say HAW HAW!" << std::endl;
}

Dog::~Dog(){
    std::cout << "The Dog Destructor called" << std::endl;
}