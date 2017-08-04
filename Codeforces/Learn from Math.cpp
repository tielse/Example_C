#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int n,l,r,a[1000001];
void Eratos(){
    for(int i=2;i<=sqrt(n);i++)
        if(a[i]==0)
            for(int j=i*i;j<=n;j+=i)
                a[j]=1;
}
int main(){
    cin>>n;
    Eratos();
    l=n/2;
    r=n/2+1;
    if(n%2==0){
            r-=1;
            while(a[l]==0 || a[r]==0){
                l--;
                r++;
            }
    }else
        {
            while(a[l]==0 || a[r]==0){
                    l--;
                    r++;
            }
        }
    cout<<l<<" "<<r<<endl;
    return 0;
}
