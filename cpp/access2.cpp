#include<iostream>
using namespace std;

class Sphere
{
    private:
        float radius;
    
    public:
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
    s1.areaSphere(7);
    // This is the method to indirectly access the private variable outside the class if needed.
    return 0;
}