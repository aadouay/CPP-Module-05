#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal():type("Defulte"){
    std::cout << "the defulte WrongAnimal constractor is caled\n";
}

WrongAnimal::WrongAnimal(const std::string name){
    std::cout << "the overlading WrongAnimal constractor is caled\n";
    type = name;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other){
    std::cout << "Copy constructor WrongAnimal called" << std::endl;
    type = other.type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other){
    std::cout << "Copy assignment operator WrongAnimal called" << std::endl;
    type = other.type;
    return *this;
}

void    WrongAnimal::makeSound() const{
    std::cout << "WrongAnimal makes a sound" << std::endl;
}

const   std::string&    WrongAnimal::getType() const{
    return type;
}

WrongAnimal::~WrongAnimal(){
    std::cout << "Destructor WrongAnimal called" << std::endl;
}