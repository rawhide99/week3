#include<iostream>
using namespace std;

void add(int a, int b, int c, float d = 0);
void add(int a, int b, float c, float d);
void add(int a, float b, float c, float d);
void add(float a, float b, float c, float d);
void add(int a, int b, int c, int d = 10);

int main()
{
    int w = 10, x = 20, y = 30, z;
    float p = 6.6, q = 7.7, r = 8.8, s = 9.9;
    int j;
    float k;
    add(w,x,y,s);
    add(w,x,r,s);
    add(w,q,r,s);
    add(p,q,r,s);
    add(w,x,y,z);
    add(w,x,y,k);
    add(w,x,y,j = 10);
    return 0;
}

void add(int a, int b, int c, float d)
{
    cout << "1.Function with 3 int and 1 float parameter is called." << endl;
    cout << a + b + c + d << endl;
}

void add(int a, int b, float c, float d)
{
    cout << "2.Function with 2 int and 2 float parameter is called." << endl;
    cout << a + b + c + d << endl;
}

void add(int a, float b, float c, float d)
{
    cout << "3.Function with 1 int and 3 float parameter is called." << endl;
    cout << a + b + c + d << endl;
}

void add(float a, float b, float c, float d)
{
    cout << "4.Function with 4 float parameter is called." << endl;
    cout << a + b + c + d << endl;
}

void add(int a, int b, int c, int d)
{
    cout << "5.Function with 4 int parameter is called." << endl;
    cout << a + b + c + d << endl;
}
