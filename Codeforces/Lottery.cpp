#include<bits/stdc++.h>
#define MAX 1000
using namespace std;
int ti[MAX]={0},n,k,t,init;
int main(){
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>t;
        ti[t]++;
    }
    int res=n/k;
    init=0;
    for(int i=1;i<=k;i++){
       if(ti[i]>res)
            init+=ti[i]-res;
    }
    cout<<init<<endl;
    return 0;
}
