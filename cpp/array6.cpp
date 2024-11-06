#include <iostream>

using namespace std;

int main()
{
    int len, width;
    cout << "Enter the length and breadth of an array" << endl;
    cin >> len >> width;
    int arr[len][width];
    cout << "Enter the elements of the 2D array" << endl;
    for(int i = 0; i < len; i++)
    {
        for(int j = 0; j < width; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "The elements entered in the array are:" << endl;
    for(int i = 0; i < len; i++)
    {
        for(int j = 0; j < width; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

}