#include<iostream>

using namespace std;

int main()
{
    const int i = 3, j = 3;
    int matrix[i][j] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};

    for(auto &row: matrix)
    {
        for(auto &column: row)
        {
            cout << column << "\t";
        }
        cout << endl;
    }
    return 0;
}