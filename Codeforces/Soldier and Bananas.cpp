#include<iostream>

using namespace std;

int main()
{
    long n;
    int k,w,s=0,tong=0;
    cin>>k>>n>>w;
    for(int i=0;i<=w;i++)
    {
        s=i*k;
        tong+=s;
        //cout<<"\nT="<<tong;
    }
    int tmp=tong-n;
    if(tmp>0)
        cout<<"\n"<<tmp;
    else
        cout<<"0";
    return 0;
}
