/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char ch;
    cout << "Enter any character you want to know whether it is a consonant or a vowel" << endl;
    cin >> ch;
    if(isalpha(ch))
    {
        if(ch =='a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch =='A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            cout << ch << " is a vowel." << endl;
        }
        else
        {
            cout << ch << " is a consonant." << endl;
        }
    }
    else
    {
        cout << ch << " is not an alphabet." << endl;
    }
    return 0;
}