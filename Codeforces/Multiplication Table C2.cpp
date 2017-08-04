#include<bits/stdc++.h>
#include<cmath>

using namespace std;

int main(){
    int n,m,count=0;
    cin>>n>>m;
    if(n==1){
        if(m==1)
            cout<<"1";
        else
            cout<<"0";
        return 0;
    }
    for(int i=1;i<=sqrt(m);i++){
        if(m%i==0){
            long long a=m/i;
            long long b=i;
            if(a<=n && b<=n){
                if(a==b)
                    count++;
                else
                    count+=2;
            }
        }
    }
    cout<<""<<count;
    return 0;
}
