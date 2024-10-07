/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter any number you want." << endl;
    cin >> a;
    
    for(int x =  1; x < 11; x ++)
    {
        cout << a <<" * "<< x << " = " << a * x << endl;
    }
    return 0;
}