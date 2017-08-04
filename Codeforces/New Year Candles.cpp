#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c,res;
    cin>>a>>b;
    res=a;
    while(a>=b){
        c=a%b;
        a/=b;
        res+=a;
        a+=c;
    }
    cout<<res<<endl;
    return 0;
}
