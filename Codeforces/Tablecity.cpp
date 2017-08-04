#include<bits/stdc++.h>

using namespace std;

int main(){
    int n=1000;
    cout<<2*n;
    for(int i=1;i<=n;i++)
        cout<<i<<" "<<1<<" "<<i<<" "<<2<<endl;
    for(int i=n;i>=1;i--)
        cout<<i<<" "<<1<<" "<<i<<" "<<2<<endl;
    return 0;
}
