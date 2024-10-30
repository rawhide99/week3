#include<iostream>
using namespace std;

void add(int a, int b, int c, float d);
void add(int a, int b, float c, float d);
void add(int a, float b, float c, float d);
void add(float a, float b, float c, float d);
void add(int a, int b, int c, int d);

int main()
{
    int w = 10, x = 20, y = 30, z = 40;
    float p = 6.6, q = 7.7, r = 8.8, s = 9.9;
    add(w,x,y,s);
    add(w,x,r,s);
    add(w,q,r,s);
    add(p,q,r,s);
    add(w,x,y,z);
    return 0;
}

void add(int a, int b, int c, float d)
{
    cout << "Function with 3 int and 1 float parameter is called." << endl;
    cout << a + b + c + d << endl;
}

void add(int a, int b, float c, float d)
{
    cout << "Function with 2 int and 2 float parameter is called." << endl;
    cout << a + b + c + d << endl;
}

void add(int a, float b, float c, float d)
{
    cout << "Function with 1 int and 3 float parameter is called." << endl;
    cout << a + b + c + d << endl;
}

void add(float a, float b, float c, float d)
{
    cout << "Function with 4 float parameter is called." << endl;
    cout << a + b + c + d << endl;
}

void add(int a, int b, int c, int d)
{
    cout << "Function with 4 int parameter is called." << endl;
    cout << a + b + c + d << endl;
}
