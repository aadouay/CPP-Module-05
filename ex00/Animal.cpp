#include "Animal.hpp"

Animal::Animal():type("Defulte"){
    std::cout << "the defulte Animal constractor is caled\n";
}

Animal::Animal(const std::string name){
    std::cout << "the overlading Animal constractor is caled\n";
    type = name;
}

Animal::Animal(const Animal& other){
    std::cout << "Copy constructor called" << std::endl;
    type = other.type;
}

Animal& Animal::operator=(const Animal& other){
    std::cout << "Copy assignment operator called" << std::endl;
    type = other.type;
    return *this;
}

void    Animal::makeSound(){
    std::cout << "Animal makes a sound" << std::endl;
}
const   std::string&    Animal::getType(){
    return type;
}

Animal::~Animal(){
    std::cout << "Destructor called" << std::endl;
}