#include<iostream>
#define r 100000
using namespace std;
int era[r+1]={0}, a[r+1]={0},k,q;
void era_sum()
{
    for(int i=1; i<r; i++)
    {
        int m=2;
        for(int j=i*2;j<=r;j=i*m){
            era[j]+=i;
            m++;
            cout<<era[j]<<" ";
        }
    }
}
void get_a()
{
    for(int i=1;i<=r;i++)
        if(era[i]>i)a[i]=1;
}
void get_a_full()
{
    for(int i=1;i<=r;i++)
        a[i]+=a[i-1];
}
int main()
{
    cin>>q>>k;
    era_sum();
    //get_a();
    //get_a_full();
    cout<<a[k]-a[q-1];
}
