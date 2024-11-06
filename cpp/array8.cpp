#include <iostream>

using namespace std;

int main()
{
    int arr1[] = {1,3,5,7,9,12,14};
    int arr2[] = {1,2,4,5,6,8,12,0,1,1,1};

    //Find the common elements between arr1 and arr2
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int size2 = sizeof(arr2)/sizeof(arr2[0]);
    bool printed[size1] = {false};

    for(int i = 0; i < size1; i++)
    {
        for(int j = 0; j < size2; j++)
        {
            if(arr1[i] == arr2[j])
            {
                if (!printed[i]) 
                {
                    cout << arr1[i] << "\t";
                    printed[i] = true;
                }
            }
        }
    }
    return 0;
}