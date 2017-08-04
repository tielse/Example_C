#include<iostream>

using namespace std;

int gcd(int a,int n){
    int i=max(a,n);
    int j=min(a,n);
    while(j!=0){
        int z=i%j;
        i=j;
        j=z;
    }
    return i;
}
int main(){
    int a,b,n,res,tmp,flag=1;
    cin>>a>>b>>n;
    while(n>0){
        flag^=1;    //lat
        if(flag==0)
            n-=gcd(a,n);
        else
            n-=gcd(b,n);
    }
    switch(flag){
        case 0:cout<<"0";   break;
        case 1:cout<<"1";   break;
        default: break;
    }
    return 0;
}
