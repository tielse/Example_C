#include<iostream>

using namespace std;

int n,m,k,ib,ie,ls,t,t0,t1,res,ans;
string s;
int f(int m){
    int t2=t1;
    res=0;
    t0=0;
    for(int i=0;i<ls;i++)
        if(s[i]=='0'){
            t0++;
            if(t0>=m){
                if(t2-m+1>0)
                    res+=(t2-m+1);
            }
        }else
            t2--;
        return res;
}
int main(){
    /*m so bo test, n va k chi so dau va cuoi, s chuoi nhi phan*/
    cin>>m;
    for(int i=0;i<m;i++)
        cin>>n>>k>>s;
        ls=s.size();
        t0=0;
        t1=0;
    for(int j=0;j<ls;j++)
        if(s[j]=='1')
            t1++;
    ans=f(k)-f(k+1);
    cout<<""<<k;
    cout<<"\n";
    cout<<""<<ans;
    return 0;
}
