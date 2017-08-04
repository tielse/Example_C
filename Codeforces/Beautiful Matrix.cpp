#include<bits/stdc++.h>
#define MAX 100
using namespace std;
int a[MAX][MAX]={0};
int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            cin>>a[i][j];
        }
    }
    int res,vt=0,ans;
    vt=1;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(vt==a[i][j]){
                res=abs(3-i)+abs(3-j);
            }
        }
        //cout<<endl;
    }
    cout<<res<<endl;
    return 0;
}
