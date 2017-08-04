#include<bits/stdc++.h>
#include<map>

using namespace std;

int f(int n)
{
    map<int,int> m;
    int t,dem=0,spt=0;
    while(n!=0){
        if(m[n%10]==0){
            dem++;
        }
        m[n%10]++;
        n/=10;
        spt++;
    }
    if(dem==spt)
        return 1;
    return 0;
}
int main(){
    int n;
    cin>>n;
    for(int i=n+1;i<=9999;i++)
    {
        if(f(i)==1)
        {
            cout<<i;
            break;
        }
    }
    return 0;
}
