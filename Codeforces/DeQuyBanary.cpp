#include<iostream>

using namespace std;
int Banary(int n)
{
    if(n/2>0)
        Banary(n/2);
    cout<<n%2;
}
int main()
{
    int n;
    cin>>n;
    Banary(n);
    return 0;
}
