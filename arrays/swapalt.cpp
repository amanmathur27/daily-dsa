// C++ program to swap the alternate elements of an array

#include <iostream>
using namespace std;

void swapAlt(int arr[], int n)
{
    for (int i = 0; i < n; i = i + 2)
    {
        if (i+1 < n)
            swap(arr[i], arr[i + 1]);
    }
}
void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[10], n;
    cout << "Enter size\n";
    cin >> n;
    cout << "Enter array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    swapAlt(arr, n);
    cout << "Altered array\n";
    printArr(arr, n);

    return 0;
}