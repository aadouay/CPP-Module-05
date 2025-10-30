#include "Cat.hpp"

Cat::Cat():Animal(){
    std::cout << "the defulte Cat constractor is caled\n";
}

Cat::Cat(const std::string name):Animal(name){
    std::cout << "the overlading Cat constractor is caled\n";
}

Cat::Cat(const Cat& other){
    std::cout << "the Cat Copy constructor called" << std::endl;
    type = other.type;
}

Cat& Cat::operator=(const Cat& other){
    std::cout << "The Cat Copy assignment operator called" << std::endl;
    type = other.type;
    return *this;
}

void    Cat::makeSound()const{
    std::cout << "Cat say HEAW MEAW!" << std::endl;
}

Cat::~Cat(){
    std::cout << "The Cat Destructor called" << std::endl;
}