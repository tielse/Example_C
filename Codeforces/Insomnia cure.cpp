#include<iostream>
#include<ctype.h>
using namespace std;

long long t[100001];
int main(){
    int k,l,m,n,d,tmp1,tmp2,tmp3,tmp4,dem=0;
    cin>>k>>l>>m>>n>>d;
    for(int i=1;i<=d/k;i++){
        tmp1=k*i;
        if(t[tmp1]==0)
            t[tmp1]=1;    }
    for(int i=1;i<=d/l;i++){
        tmp2=l*i;
        if(t[tmp2]==0 && t[tmp1]!=t[tmp2])
            t[tmp2]=1;
    }
    for(int i=1;i<=d/m;i++){
        tmp3=m*i;
        if(t[tmp3]==0 && t[tmp3]!=t[tmp1] && t[tmp3]!=t[tmp2])
            t[tmp3]=1;
    }
    for(int i=1;i<=d/n;i++){
        tmp4=n*i;
        if(t[tmp4]==0 && t[tmp4]!=t[tmp1] && t[tmp4]!=t[tmp2] && t[tmp4]!=t[tmp3])
            t[tmp4]=1;
    }
    for(int i=0;i<=d;i++)
        if(t[i]==1)
        dem++;
    cout<<""<<dem;
    return 0;
}
