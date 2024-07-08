#include <iostream>
using namespace std;

int BinarySearch(int arr[], int left, int right, int x)
{
    int mid;
    while (left <= right)
    { // Corrected the loop condition
        mid = (right + left) / 2;
        if (arr[mid] == x)
        {
            return mid;
        }
        else if (arr[mid] < x)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int num, myArray[10], result, option;
    cout << "Enter 10 numbers in ascending order" << endl;
    for (int i = 0; i < 10; i++)
    { // Corrected the array indexing
        cout << "#" << (i + 1) << ": ";
        cin >> myArray[i];
    }

    do
    {
        cout << "Which number do you want to search: ";
        cin >> num;
        result = BinarySearch(myArray, 0, 9, num); // Adjusted indices for BinarySearch
        if (result == -1)
        {
            cout << "Not found" << endl;
        }
        else
        {
            cout << "Desired number " << num << " found at index " << result << endl;
        }

        cout << "Enter 0 to stop or any other number to continue: ";
        cin >> option;
    } while (option != 0); // Corrected the loop condition

    return 0;
}
