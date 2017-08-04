#include<bits/stdc++.h>

using namespace std;
int n,m;
int main(){
    cin>>n>>m;
    if(n>m)
        n=m;
    if(n%2==0)
        cout<<"Malvika"<<endl;
    else
        cout<<"Akshat"<<endl;
    return 0;
}
