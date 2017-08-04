#include<bits/stdc++.h>
#define MAX 200000
using namespace std;
long long a[MAX]={0},b[MAX]={0},m,x,y;
int main(){
    int n,n1,t_a=0,t_b=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        long long sum[MAX];
        cin>>n1>>m>>x>>y;
        do{
            a[t_a++]=x%m;
            x/=m;
        }while(x);
        do{
            b[t_b++]=y%m;
            y/=m;
        }while(y);
        for(int j=0;j<t_a;j++){
            cout<<a[j]<<" "<<b[j]<<endl;
        }
        if(t_a>t_b){
            while(t_a>t_b){
                b[t_b]=0;
                t_b++;
            }
        }else
            {
                while(t_b>t_a){
                    a[t_a]=0;
                    t_a++;
                }
            }
           // cout<<t_a<<endl;
       int j;
       for(j=0;j<t_a;j++){
            sum[j]=(a[j]+b[j])%m;
       }
       //cout<<j<<endl;
       int res=0;
       for(int q=0;q<j;q++){
            cout<<sum[q]<<" ";
            res+=(pow(m,q)*sum[q]);
       }
       cout<<n1<<" "<<res<<endl;
    }
    return 0;
}
/*
4
1 2 123 456
2 3 123 456
3 4 123 456
4 5 123 456
*/
