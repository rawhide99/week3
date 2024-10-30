#include <iostream>

using namespace std;

class Digit
{
    public:
        int num;

        ~Digit()
        {
            cout << "By default, destructor is called." << endl;
        }
};

int main()
{
    Digit d1;
    d1.num = 7;
    int i = 0;
    while (i < 7)
    {
        Digit d2;
        d2.num = i;
        i++;
    }
    return 0;
}