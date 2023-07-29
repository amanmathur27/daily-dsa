// Print all the palindrome numbers in a given range

#include <iostream>
using namespace std;
bool isPali(int n)
{
    int temp = n, a = 0;
    while (temp > 0)
    {
        int rem = temp % 10;
        a = a * 10 + rem;
        temp = temp / 10;
    }
    if (n == a)
    {
        return true;
    }
    else
        return false;
}
int main()
{
    int s, e;
    cout << "Enter range\n";
    cin >> s >> e;
    for (int i = s; i < e; i++)
    {
        if (isPali(i))
        {
            cout << i << " ";
        }
    }
    return 0;
}