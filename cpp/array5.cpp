#include<iostream>
using namespace std;

void mergeArr(int *marr, int *arr1, int *arr2, int n1, int n2);

int main()
{
    int arr1[] = {7,8,9,10};
    int arr2[] = {0,1,2,3,4,5,6};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int marr[size1 + size2];
    mergeArr(marr, arr1, arr2, size1, size2);
    return 0;
}

void mergeArr(int *marr, int *arr1, int *arr2, int n1, int n2)
{
    int i = 0, j = 0, k = 0;
    while(i < n1)
    {
        marr[k++] = arr1[i++];
    }

    while(j < n2)
    {
        marr[k++] = arr2[j++];
    }

    for(int p = 0; p < k; p++)
    {
        for(int q = 0; q < k - 1 - p; q++)
        {
            if(marr[q] > marr[q+1])
            {
                int temp = marr[q];
                marr[q] = marr[q+1];
                marr[q+1] = temp;
            }
        }
    }

    cout << "After getting sorted." << endl;
    for(int r = 0; r < k; r ++)
    {
        cout << marr[r] << '\t';
    }

}