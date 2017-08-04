#include<iostream>

using namespace std;
int main()
{
    int n,m,a;
    long long h,w;
    cin>>n>>m>>a;
    w=n/a+(n%a!=0?1:0);
    h=m/a+(m%a!=0?1:0);
    cout<<w*h;
    return 0;
}
