#include <iostream>
using namespace std;

// Merge function
void merge(int arr[], int l, int m, int r)
{
    int i = l;     // starting index for left subarray
    int j = m + 1; // starting index for right subarray
    int k = l;     // starting index for temporary

    int temp[5];
    while (i <= m && j <= r)
    {
        if (arr[i] <= arr[j])
        {
            temp[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            temp[k] = arr[j];
            j++;
            k++;
        }
    }
    while (i <= m)
    {
        temp[k] = arr[i];
        i++;
        k++;
    }

    while (j <= r)
    {
        temp[k] = arr[j];
        j++;
        k++;
    }

    for (int s = l; s <= r; s++)
    {
        arr[s] = temp[s];
    }
}

// Merge sort function
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = (l + r) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

int main()
{
    // int arr[5] = {4, 6,1,2,7};
    int myarr[5];
    cout << "ENter 5 numbers:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> myarr[i];
    }
    mergeSort(myarr, 0, 4);

    cout << "After sort:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << myarr[i] << " ";
    }

    return 0;
}