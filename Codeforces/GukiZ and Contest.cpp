#include<iostream>

using namespace std;
int main()
{
    int n;
    int a[2001],b[2001];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<n;i++)
        {
            int x=a[i];
            if(!b[x])
            for(int j=0;j<n;j++)
                {
                    if(a[j]>x)
                        b[x]++;
                }
        }
    for(int i=0;i<n;i++)
        cout<<1+b[a[i]]<<" ";
    return 0;
}
