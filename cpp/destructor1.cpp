#include <iostream>
using namespace std;

class Bird
{
    private:
        string ex1 = "Sparrow";

    public:
        Bird()
        {
            cout << "The name of the bird is " << ex1 << endl;
        }

        ~Bird()
        {
            cout << "By default destructor is called before deallocating the resources." << endl;
        }
};

int main()
{
    Bird b1;
    return 0;
}