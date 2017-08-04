#include<iostream>

using namespace std;
int main()
{
    int n,k,dem=0;
    int a[101];
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
    {
        if(a[i]>=a[k] && a[i]>0)
            dem++;
        else
            break;
    }
    cout<<""<<dem;
    return 0;
}
