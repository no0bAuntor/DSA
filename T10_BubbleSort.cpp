#include<iostream>
using namespace std;

void bubbleSort(int arr[])
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9-i; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            
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
    bubbleSort(myarr);

    cout<<"\nSorted Array:"<<endl;

    for (int i = 0; i < 10; i++)
    {
        cout<<myarr[i]<<" ";
    }
}