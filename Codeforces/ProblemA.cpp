#include<iostream>

using namespace std;
int main()
{
    int n,t,tmp1=0,tmp2=0;
    int *a=new int[n];
    cin>>n>>t;
    for(int i=1;i<=n-1;i++)
    {
        cin>>a[i];

        if(i%2==0)
            tmp1+=a[i];
        else
            tmp2+=a[i];
    }
        if(tmp1>=t && tmp2>=t)
            cout<<"YES";
        else
            cout<<"NO";
    return 0;
}
