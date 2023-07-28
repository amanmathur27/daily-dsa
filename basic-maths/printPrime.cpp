// Printing all the prime numbers in a given range


#include <iostream>
using namespace std;

bool chkPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int s, e;
    cout << "Enter the range for printing prime\n";
    cin >> s >> e;
    for (int i = s; i < e; i++)
    {
        if (chkPrime(i))
        {
            cout << i << " ";
        }
    }
    return 0;
}