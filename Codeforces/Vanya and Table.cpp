#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
    int n,a,b,c,d,tmp=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b>>c>>d;
        tmp+=abs(c-a+1)*abs(d-b+1);
    }
    cout<<tmp;
    return 0;
}
