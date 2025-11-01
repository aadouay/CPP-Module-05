#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal{
    private:
        Brain *mind;
    public:
        Cat();
        Cat(const std::string name);
        Cat(const Cat& other);
        Cat& operator=(const Cat& other);
        void makeSound()const;
        // void setDogIdea(int index, std::string idea);
        void    show_data(){
            std::cout << "address of mind is " << mind << std::endl;
        }
        ~Cat();
};

#endif