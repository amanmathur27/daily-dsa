#include <iostream>
using namespace std;
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
}
void arrayRev(int arr[], int n)
{
    int s = 0, e = n - 1;
    while (s < e)
    {
        swap(arr[s++], arr[e--]);
    }
}
int main()
{
    int n, arr[10];
    cout << "Enter array size\n";
    cin >> n;
    cout << "Enter array elements\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    arrayRev(arr, n);
    cout << "Reverse of the array is\n";
    printArray(arr, n);
    return 0;
}