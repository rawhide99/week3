#include<iostream>
using namespace std;

class Sphere
{
    private:
        float radius;
    
    public:
        float radi;
        void areaSphere (float rad)
        {
            radius = rad;
            float area = 3.14 * radius * radius * radius;
            cout << "Area of a sphere is " << area << endl; 
        }
};

int main()
{
    Sphere s1;
    //1st Method: Directly using the public data member and member function
    s1.radi = 6;
    cout << "1st Method: Directly using the public data member and member function." << endl;
    s1.areaSphere(s1.radi);

    // 2nd method: Indirectly accessing the private variable outside the class with a public member function
    cout << "2nd method: Indirectly accessing the private variable outside the class with the help of a public member function." << endl;
    s1.areaSphere(7);
    return 0;
}