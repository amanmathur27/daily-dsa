// C++ code to check whether a given number is prime or not

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
    int n;
    cout << "Enter any number\n";
    cin >> n;
    if (chkPrime(n))
    {
        cout << "The given number " << n << " is Prime\n";
    }
    else{
        cout << "The given number " << n << " is not Prime\n";
    }
    return 0;
}