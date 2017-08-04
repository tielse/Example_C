#include<bits/stdc++.h>
#define MAX 100000000
using namespace std;
int a[MAX],n,m,l,r,mid;
int main(){
    cin>>n>>m;
    for(int i=1;i<=m;i++)
        cin>>a[i];
    for(int i=1;i<=m;i++){
        l=1;
        r=a[i];
        mid=(l+r)/2;
        while(l<=r){
            if(mid<n)
                l=mid+1;
            else
                r=mid-1;
            mid=(l+r)/2;
            cout<<l<<" "<<r<<endl;
        }
    }
    cout<<mid<<endl;
    return 0;
}
