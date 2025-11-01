#include "Cat.hpp"

Cat::Cat():Animal(), mind(new Brain()){
    std::cout << "the defulte Cat constractor is caled\n";
}

Cat::Cat(const std::string name):Animal(name), mind(new Brain()){
    std::cout << "the overlading Cat constractor is caled\n";
}

Cat::Cat(const Cat& other):Animal(other){
    std::cout << "the Cat Copy constructor called" << std::endl;
    type = other.type;
    mind = other.mind;
}

Cat& Cat::operator=(const Cat& other){
    std::cout << "The Cat Copy assignment operator called" << std::endl;
    if(this == &other)
        return *this;
    type = other.type;
    Animal::operator=(other);
    mind = new Brain();
    for (int i = 0; i < 100; i++) {
        mind->ideas[i] = other.mind->ideas[i];
    }
    return *this;
}

void    Cat::makeSound()const{
    std::cout << "Cat say HEAW MEAW!" << std::endl;
}

Cat::~Cat(){
    std::cout << "The Cat Destructor called" << std::endl;
    delete mind;
}