#include<bits/stdc++.h>
#define MAX 1000
using namespace std;
int a[MAX]={0},n,m,imin=100000,t;
int main(){
    cin>>n>>m;
    for(int i=1;i<=m;i++)
        cin>>a[i];
    sort(a+1,a+m+1);
    int i=1,j=n;
    while(j<=m){
        t=a[j]-a[i];
        imin=min(imin,t);
        i++;
        j++;
    }
    cout<<imin<<endl;
    return 0;
}
