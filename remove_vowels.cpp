/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// Removing vowels from a string
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string str = "Rawhide Dexter";
    string new_str = "";
    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' && str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U')
        {
            new_str += str[i];
        }
    }
    
    cout << "String without vowels: " << new_str << endl;
    
    return 0;
}