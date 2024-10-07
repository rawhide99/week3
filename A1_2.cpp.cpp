/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	char a = 65;
	cout << "character value: " << a << endl;
	short b = 65;
	cout << "short value: " << b << endl;
	float c = 65;
	cout << "float value: " << c << endl;
	int d = 98;
    cout << "Decimal: " << d << endl;
    cout << "Hexadecimal: " << hex << d << endl;
    cout << "Octal: " << oct << d << endl;
    
    // Reset to decimal
    cout << dec;
	return 0;
}