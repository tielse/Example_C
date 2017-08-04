#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int a[1000001]={0};
/*San Eratos*/
void Eratos(int n){
    for(int i=2;i<=sqrt(n);i++)
        if(a[i]==0)
            for(int j=i*i;j<=n;j+=i)
                a[j]=1;
}
int main(){
    int n,x,y,flag=0;
    cin>>n;
    Eratos(n);
    for(int i=0;i<=n/2;i++){
        for(int j=i;j<=n;j++){
            if(a[i]==1 && a[j]==1){
                x=i;
                y=j;
                if((x+y)==n){
                   flag++;
                   if(flag==1){
                        cout<<x<<" "<<y<<endl;  break;
                   }
                }
            }
        }
    }
    return 0;
}

