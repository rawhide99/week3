#include<iostream>

using namespace std;

int getMin(int *arr, int size);
int getMax(int *arr, int size);

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

    int minValue = getMin(xyz, len);
    int maxValue = getMax(xyz, len);
    cout << "The minimum value entered in the array is " << minValue << endl;
    cout << "The maximum value entered in the array is " << maxValue << endl;
    return 0;
}

int getMin(int *arr, int size)
{
    int min = arr[0];
    for(int i = 1; i < size; i++)
    {
        if(min > arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}

int getMax(int *arr, int size)
{
    int max = arr[0];
    for(int i = 1; i < size; i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}
