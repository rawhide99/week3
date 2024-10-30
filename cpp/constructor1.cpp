// Type of a Constructors:

// 1) Default constructor : This type of constructor takes no argument.
// 2) Parameterized constructor: This type of constructor takes value to initialize a data member
// 3) Copy constructor: It creates a object from already existing object by copying it.
// 4) move constructor: It creates a object from already existing object but by moving it.

#include <iostream>
using namespace std;

class Animal
{
    private:
        string ex1 = "LION";
    
    public:
        Animal()
        {
            cout << "This is Default constructor." << endl;
            cout << "There is no argument given so it will be by deault " << ex1 << " animal." << endl;
        }

        Animal(string newAnimal)
        {
            cout << "This is the parameterized constructor." << endl;
            ex1 = newAnimal;
            cout << "Here the argument is given to replace the animal." << endl;
            cout << "The new animal is " << ex1 << "." << endl;

        }
};

int main()
{
    Animal a1;
    Animal a2("BEAR");
    Animal a3("TIGER");
    return 0;
}

