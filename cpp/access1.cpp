#include<iostream>

using namespace std;

class Circle
{
    private:
        //float radius; If radius is defined and accessed in main function, then error occurs which is shown below.
        float radius = 4;
    
    public:
        void areaCircle()
        {
            float area = 3.14 * radius * radius;
            cout << "Area of a circle = " << area << endl;
        }
};

int main()
{
    Circle c1;
    //c1.radius = 7; Throws error "'int Circle::radius' is private within this context"
    c1.areaCircle();
    return 0;
}