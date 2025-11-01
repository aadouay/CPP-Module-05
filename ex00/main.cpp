#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{

    // up casting !! (implcit cast)
    const Animal* meta = new Animal("ahmed");
    const Animal* j = new Dog("ali");
    const Animal* i = new Cat("naser");
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    const WrongAnimal* wrong = new WrongCat();
    wrong->makeSound();
    delete meta;
    delete i;
    delete j;
    delete wrong;

    return 0;
}