#include <bits/stdc++.h>
using namespace std;
long long ma,a[101000];
long long dp[101000];
long long maxx(long long a,long long b)
{
    if (a>b)
        return a;
    return b;
}
int test[101000];
int main()
{
    int n;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    dp[n]=a[n];
    test[n]=2;
    for(int i=n-1;i>=1;i--)
    {
        if (a[i]==dp[i+1])
            test[i]=1;
        else if (a[i]>dp[i+1])
            test[i]=2;
        dp[i]=max(dp[i+1],a[i]);
    }
    for (int i=1;i<=n;i++)
    {
        if (test[i]==1)
            cout<<"1";
        else if (test[i]==2)
            cout<<"0";
        else
            cout<<dp[i]+1-a[i];
        cout<<' ';
    }
}
