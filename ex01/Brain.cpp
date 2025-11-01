#include "Brain.hpp"

Brain::Brain(){
    std::cout << "the defulte constractor of Brain is Called!\n";
}
Brain::Brain(const Brain& other){
    std::cout << "the copy constructor of Brain is Called!\n";
    *this = other;
}

Brain&  Brain::operator=(const Brain& other){

    if(this == &other)
        return *this;
    
    for (size_t i = 0; i < this->ideas->size(); i++)
        this->ideas[i] = other.ideas[i];
    return *this;
}

const std::string& Brain::getIdea(int index) const{
    if(index >= 0 && index < 100)
        return (ideas[index]);
    return "";
}

Brain::~Brain(){
    std::cout << "the destractor of Brain is Called!\n";
}