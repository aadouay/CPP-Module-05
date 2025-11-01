#include <iostream>

class base{

    public:
        virtual void    print(){
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

    base *ptr = new drived();
    ptr->print();
}