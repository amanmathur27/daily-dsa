#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    else if (b == 0)
        return a;
    else
    {
        while (a != b)
        {
            if (a > b)
            {
                a = a - b;
            }
            else
            {
                b = b - a;
            }
        }
        return a;
    }
}
int main()
{
    int a, b, ans;
    cout << "Enter the two numbers\n";
    cin >> a >> b;
    ans = gcd(a, b);
    cout << "The GCD of " << a << " and " << b << " is " << ans;
    return 0;
}