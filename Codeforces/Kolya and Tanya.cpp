#include<bits/stdc++.h>

using namespace std;

long long mod=1000000007,n;
int NhanAiCap(long long ans,long long n){
    long res=1;
    while(n>0){
        if(n&1)
            res=(res*ans)%mod;
        ans=(ans*ans)%mod;
        n>>=1;
    }
    return res;
}
int main(){
    cin>>n;
    cout<<(NhanAiCap(27,n)-NhanAiCap(7,n)+mod)%mod<<endl;
    return 0;
}
