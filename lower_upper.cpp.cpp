/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//toggling each character from upper to lower and lower to upper
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string str = "RawHide DexTeR";
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(islower(str[i]) != 0)
        {
            str[i] = toupper(str[i]);
        }
        else if(isupper(str[i]) != 0)
        {
            str[i] = tolower(str[i]);
        }
    }
    cout << "Toggled string: " << str << endl;
    return 0;
}
