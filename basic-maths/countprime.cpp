// Count total number of prime numbers between a given range
//Using normal approach

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
    int s, e, count = 0;
    cout << "Enter the range\n";
    cin >> s >> e;
    for (int i = s; i < e; i++)
    {
        if (chkPrime(i))
        {
            count++;
        }
    }
    cout << "There are " << count << " prime numbers between " << s << " and " << e;
    return 0;
}
