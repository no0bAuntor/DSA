#include <iostream>
using namespace std;

void insertionSort(int arr[])
{
    for (int i = 1; i < 10; i++)
    {
        int key;
        int j = i - 1;
        key = arr[i];
        while (j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j = j - 1;
        }
        arr[j+1] = key;
    }
}
int main()
{
    int myarr[10];
    cout << "Enter numbers:" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "#" << i + 1 << ": ";
        cin >> myarr[i];
    }
    cout << "You have enterd:" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << myarr[i] << " ";
    }
    insertionSort(myarr);

    cout<<"\nSorted Array:"<<endl;

    for (int i = 0; i < 10; i++)
    {
        cout<<myarr[i]<<" ";
    }
}