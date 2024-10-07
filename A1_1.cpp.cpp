/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;
int sum(int a, int b);
int sub(int a, int b);
int mul(int a, int b);

int main() 
{
    int a, b, res;
    
    int sum(int a, int b);
    int sub(int a, int b);
    int mul(int a, int b);
        
    cout << "Enter the values of a and b" << endl;
    cin >> a >> b;
    res = sum(a,b);
    cout << "The result of addition is " << res << endl;
    res = sub(a,b);
    cout << "The result of subtraction is " << res << endl;
    res = mul(a,b);
    cout << "The result of multiplication is " << res << endl;
    return 0;
}

int sum(int a, int b)
{
    return (a+b);
}

int sub(int a, int b)
{
    if(a > b)
        return (a-b);
    else
        return (b-a);
}

int mul(int a, int b)
{
    return (a*b);
}
