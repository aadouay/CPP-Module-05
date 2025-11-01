#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    // const Animal* j = new Dog();
    // Dog *ptr = (Dog *)j;
    // ptr->show_data();
    // const Animal* i = new Cat();
    // Cat *pt2 = (Cat *)i;
    
    // pt2->show_data();
    // delete j;//should not create a leak
    // delete i;

    Dog dog1;
    Dog dog2;
    dog1 = dog2;

    // dog2.getMind()->getIdea(0);
    // dog2.getMind()->setIdea("idea", 0);

    return 0;
}