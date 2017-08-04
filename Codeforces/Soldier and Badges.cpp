#include<iostream>

using namespace std;
void nhapmt(long a[],int n)
{
    for(int i=0;i<n;i++)
        cin>>a[i];
}
void xuatmt(long a[],int n)
{
    for(int i=0;i<n;i++)
        cout<<" "<<a[i];
}
void sort(long a[],int n)
{
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
        if(a[j-1]>a[j])
            swap(a[i],a[j]);
}
int tinh(long a[],int n)
{
    for(int i=1;i<=n;i++)
    {
        int t=a[sort(i)]-i;

    }
}
int main()
{
    long a[100001];
    int n;
    cin>>n;
    nhapmt(a,n);
    sort(a,n);
    xuatmt(a,n);
    return 0;
}
