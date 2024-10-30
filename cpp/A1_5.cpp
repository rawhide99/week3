/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    unsigned int a;
    int sum = 0;
    cout << "Enter any 4-digit number you want: ";
    cin >> a;

    if (a >= 1000 && a <= 9999) 
    {
        cout << "Face values are:" << endl;

        // Extract and print each digit while calculating the sum
        for (int x = 1000; x >= 1; x /= 10) 
        {
            int digit = (a / x) % 10; // Extract the current digit
            cout << "Face value = " << digit << endl;
            sum += digit; // Add the digit to the sum
        }

        cout << "The addition of the given 4-digit number is: " << sum << endl;
    } 
    else 
    {
        cout << "Please enter a valid 4-digit number." << endl;
    }

    return 0;
}
