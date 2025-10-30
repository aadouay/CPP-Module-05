#include <iostream>

class base{

    public:
        void    print(){
            std::cout << "we are in the base class\n";
        }
};

class drived: public base{

    public:
        void    print(){
            std::cout << "we are in the Drived class\n";
        }
};

int main(){
    drived obj;

    obj.print();

    base *ptr = &obj;
    ptr->print();
}