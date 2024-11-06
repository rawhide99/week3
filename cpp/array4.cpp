#include<iostream>
using namespace std;

int get2Min(int *arr, int size);
int get2Max(int *arr, int size);

int main()
{
    int len = 7;
    int xyz[len];
    cout << "Enter the elements of the array" << endl;
    for(int i = 0; i < len; i++)
    {
        cin >> xyz[i];
    }

    for(int x = 0; x < len; x++)
    {
        cout << x+1 << " element is " << xyz[x] << endl;
    }

    int minValue = get2Min(xyz, len);
    int maxValue = get2Max(xyz, len);
    cout << "The second minimum value entered in the array is " << minValue << endl;
    cout << "The second maximum value entered in the array is " << maxValue << endl;
    return 0;
}

int get2Min(int *arr, int size)
{
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size - 1 - i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    int min2;
    min2 = arr[1];
    return min2;
}

int get2Max(int *arr, int size)
{
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size - 1 - i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    int max2 = 0;
    max2 = arr[size-2]; // size is 7 and the we start storing elements from 0 so the last element is stored in 6th index.
                        // hence, second largest element is stored in 5th index after sorting so, size-2 is valid.
    return max2;
}
