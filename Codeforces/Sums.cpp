#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int t,n,ans,res,flag=0;
int main(){
    for(cin>>t;t--;){
        cin>>n;
        for(int i=2;i<=sqrt(n)+1;i+=2){
            ans=n-(pow(i,2)+i)/2;
            if(ans%(i+1)==0){
                flag=1;
                if(ans){
                    res=ans/(i+1);
                    cout<<res<<" + ";
                }
                 for(int j=1;j<=i;j++){
                    cout<<(res+j)<<" + ";
                }
                cout<<endl;
            }
        }
        if(!flag)
            cout<<"IMPOSS"<<endl;
    }
    return 0;
}
