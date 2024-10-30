#include<iostream>
using namespace std;

class Demo
{
    private:
        int variable = 9;
    
    public:
        int x = 1, y = 2;
        Demo()
        {
            cout << "This is default constructor so the value of a default variable is " << variable << endl;
        }

        Demo(int a, int b)
        {
            cout << "The values of variable a and b in parameterized constructor is "<< a << " and " << b << endl;
        }

        ~Demo()
        {
            cout << "Destructor does not have return value and also does not take any parameters." << endl;
            cout << "Destructor is called for every type of constructor." << endl;
        }
};

int main()
{
    cout << "There are total 95 keywords in c++." << endl;
    Demo d1;
    Demo d2(10, 30);
    return 0;
}