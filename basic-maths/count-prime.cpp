// using more efficient approach (Sieve of Eratosthenes algorithm)

#include <iostream>
#include <vector>
using namespace std;
int countPrime(int n)
{
    vector<bool> isPrime(n, true);
    int cnt = 0;
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i < n; i++)
    {
        if (isPrime[i])
        {
            cnt++;
            for (int j = i * 2; j < n; j = j + i)
            {
                isPrime[j] = false;
            }
        }
    }
    return cnt;
}
int main()
{
    int n;
    cout << "Enter the last value\n";
    cin >> n;
    cout<<countPrime(n);
    return 0;
}
