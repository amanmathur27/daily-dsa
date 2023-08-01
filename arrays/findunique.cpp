// C++ program to find the unique element from a array where each elemet is repeating two times
#include <iostream>
using namespace std;

int unique(int arr[], int n){
    int ans = 0;
    for (int i = 0; i < n; i++){
        ans = ans ^ arr[i];
    }
    return ans;
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
    cout<<"Unique element is "<<unique(arr, n);

    return 0;
}