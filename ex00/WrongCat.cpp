#include "WrongCat.hpp"

WrongCat::WrongCat():WrongAnimal(){
    std::cout << "the defulte WrongCat constractor is caled\n";
}

WrongCat::WrongCat(const std::string name):WrongAnimal(name){
    std::cout << "the overlading WrongCat constractor is caled\n";
}

WrongCat::WrongCat(const WrongCat& other):WrongAnimal(other){
    std::cout << "the WrongCat Copy constructor called" << std::endl;
    type = other.type;
}

WrongCat& WrongCat::operator=(const WrongCat& other){
    std::cout << "The Cat Copy assignment operator called" << std::endl;
    type = other.type;
    return *this;
}

void    WrongCat::makeSound()const{
    std::cout << "WrongCat say HEAW MEAW!" << std::endl;
}

WrongCat::~WrongCat(){
    std::cout << "The WrongCat Destructor called" << std::endl;
}