/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// Length of a string
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string st = "Best Embedded Engineer: Dexter";
    int length = 0;
    for(int i = 0; st[i] != '\0'; i++)
    {
        length ++;
    }
    cout<<"The length of a string is " << length << endl;

    return 0;
}