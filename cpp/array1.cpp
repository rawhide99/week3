#include <iostream>

using namespace std;

void sort (int *arr1, int size);
int main()
{
    int len = 7;
    int arr[len];
    cout << "Enter the elements for the array." << endl;
    for(int i = 0; i < 7; i++)
    {
        cin >> arr[i];
    }

    for(int i = 0; i < 7; i++)
    {
        cout << "The " << i << " element of array is " << arr[i] << endl;
    }
    cout << "Calling the sort fucnction" << endl;
    sort(arr, len);

    return 0;
}

void sort(int *arr1, int size)
{
    for(int i = 0; i < size -1; i++)
    {
        for(int j = 0; j < size-1-i; j++)
        {
            if(arr1[j] > arr1[j+1])
            {
                int temp = arr1[j];
                arr1[j] = arr1[j+1];
                arr1[j+1] = temp;
            }
        }
       
    }

    cout << "Sorted Array:" << endl;

    for(int i = 0; i < 7; i++)
    {
        cout << "The " << i << " element of array is " << arr1[i] << endl;
    }
}