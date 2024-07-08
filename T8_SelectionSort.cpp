#include <iostream>
using namespace std;
void selectionSort(int arr[])
{
    for (int i = 0; i < 9; i++)
    {
        int min = i;
        for (int j = i + 1; j < 10; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        if (arr[min] != arr[i])
        {
            int temp;
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
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

    selectionSort(myarr);

    cout << "\nSorted Array:" << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << myarr[i] << " ";
    }
}