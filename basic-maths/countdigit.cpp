#include<iostream>
using namespace std;
int countDigit(int n){
    int count = 0;
    while(n > 0){
        int temp = n % 10;
        count++;
        n = n / 10;
    }
    return count;
     
}
int main()
{
    int  n;
    cout<<"Enter the number\n";
    cin>>n;
    cout<<countDigit(n);
return 0;
}