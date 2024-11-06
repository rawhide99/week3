#include <iostream>
using namespace std;

class Base
{
    protected:
        int protect_id;
};

class New : public Base
{
    public:
        void setID(int id)
        {
            protect_id = id;
        }

        // Accessing the protected data member of the Base class.

        void displayID()
        {
            cout << "The given ID is " << protect_id << endl;
        }
};

int main()
{
    New n1;
    n1.setID(344);
    n1.displayID();
    return 0;
}