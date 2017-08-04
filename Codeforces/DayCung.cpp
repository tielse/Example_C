#include<iostream>
using namespace std;
int kiemtra(int a[],int i,int j,int &dem)
{
    for(i+1;i<j;i++)
    {
        if(a[a[i]]>j || a[a[i]]<i) dem++;
    }
    a[a[j]]=-1;
    a[j]=-1;
}
int main()
{
    int n;
    cin>>n;
    int a[2*n+2];
    for(int i=0;i<n;i++)
    {
        int t1, t2;
        cin>>t1>>t2;
        a[t1]=t2;a[t2]=t1;
    }
    int dem=0;
    for(int i=1;i<=2*n;i++)
    {
        if(a[i]!=-1)
        {
                if(a[i]%2*n-i%2*n !=-1 && a[i]%2*n-i%2*n !=1)
                kiemtra(a,i,a[i],dem);
        }
    }
    cout<<""<<dem;
}
