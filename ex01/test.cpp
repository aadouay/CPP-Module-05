#include <iostream>

// shallow copy !!

// Box Class
class box {
private:
    int length;
    int breadth;
    int height;
      int *p;

public:
    void set_dimensions(int length1, int breadth1,
                        int height1,int x)
    {
        length = length1;
        breadth = breadth1;
        height = height1;
          p=new int;
      *p=x;
    }

    void show_data()
    {
        std::cout << " Length = " << length
             << "\n Breadth = " << breadth
             << "\n Height = " << height
             << "\n P int pointing to = "<<p
             << std:: endl;
    }
    ~box(){
        delete p;
    }
};

// deep copy

class ikhan{
    private:
        int length;
        int breadth;
        int height;
        int *p;
    public:
        void set_dimensions(int length1, int breadth1,
                            int height1,int x)
        {
            length = length1;
            breadth = breadth1;
            height = height1;
            p = new int;
            *p=x;
        }
        ikhan(){
            length = 0;
            breadth = 0;
            height = 0;
            p = new int;
            *p = 0;
        }
        ikhan(const ikhan& other){
            length = other.length;
            breadth = other.breadth;
            height = other.height;
            p = new int;
            *p = *other.p;
        }

        ikhan&  operator=(const ikhan& other){
            std::cout << "deep copy constractor caled\n";
            if (this == &other) {
                return *this;
            }
            length = other.length;
            breadth = other.breadth;
            height = other.height;
            p = new int;
            *p = *other.p;
            return *this;
        }
        void show_data()
        {
            std::cout << " Length = " << length
                << "\n Breadth = " << breadth
                << "\n Height = " << height
                << "\n P int pointing to = "<<p
                << std:: endl;
        }
        ~ikhan(){
            std::cout << "destractor clled\n";
            delete p;
        }
};
// Driver Code
int main()
{

    ikhan A1;

    A1.set_dimensions(14, 12, 16,100);
    ikhan A2(A1);
    A1.show_data();
    A2.show_data();

    return 0;
}