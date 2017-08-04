#include<iostream>
#define MAX 10001
using namespace std;
long long a[MAX][MAX]={0};
int main(){
    int64_t n,m,count=0,i,j;
    cin>>n>>m;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            a[i][j]=i*j;
            //cout<<" "<<a[i][j];
        }
        //cout<<"\n";
    }
    for(i=0;i<=n;i++){
        for(j=0;j<=n;j++){
            if(a[i][j]==m)
                count++;
        }
    }
    cout<<""<<count;
    return 0;
}
