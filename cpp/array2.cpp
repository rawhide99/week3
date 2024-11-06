#include<iostream>
using namespace std;

int main()
{
    int arr1[] = {1,3,4,5,6,8,0};
    int arr2[] = {1,3,4,5,6,9,0};

    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int size2 = sizeof(arr2)/sizeof(arr2[0]);

    if(size1 != size2)
    {
        cout << "The given two arrays are not same." << endl;
    }
    else
    {
        bool areSame =  true;
        for(int i = 0; i < size1; i++)
        {
            if(arr1[i] != arr2[i])
            {
                areSame = false;  // If any element does not match, set areSame to false
                cout << "The given two arrays are definitely not the same." << endl;
                break;  // Exit the loop early as arrays are not the same
            }
        }
            
        if (areSame)
        {
            cout << "The given two arrays have the same elements and the same size." << endl;
        }
    }
    return 0;
}