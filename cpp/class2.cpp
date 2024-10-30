#include <iostream>
using namespace std;

class student
{
    private:
        int rollNo = 444;
        string name = "Anekant";
        string email = "anekant.patil@siliconstack.com.au";

    public:
        void printName();
        void printRoll()
        {
            cout << "The roll no of given student is " << rollNo << endl;
        }

        void printEmail()
        {
            cout << "The email of given student is " << email << endl;
        }
};

void student::printName()
{
    cout << "The name of a given student is " << name << endl;
}

int main()
{
    student s1;
    s1.printName();
    s1.printRoll();
    s1.printEmail();
    return 0;
}
