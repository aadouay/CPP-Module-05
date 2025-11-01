#include "Dog.hpp"

Dog::Dog():Animal(), mind(new Brain()){
    std::cout << "the defulte Dog constractor is caled\n";
}

Dog::Dog(const std::string name):Animal(name){
    std::cout << "the overlading Dog constractor is caled\n";
}

Dog::Dog(const Dog& other): Animal(other), mind(new Brain()) {
    std::cout << "the Dog Copy constructor called" << std::endl;
    type = other.type;
    mind = other.mind;
}

Dog& Dog::operator=(const Dog& other){
    std::cout << "The Dog Copy assignment operator called" << std::endl;
    if(this == &other)
        return *this;
    type = other.type;
    mind = new Brain();
    for (int i = 0; i < 100; i++) {
        mind->ideas[i] = other.mind->ideas[i];
    }
    return *this;
}

void    Dog::makeSound()const{
    std::cout << "Dog say HAW HAW!" << std::endl;
}

Dog::~Dog(){
    std::cout << "The Dog Destructor called" << std::endl;
    delete mind;
}