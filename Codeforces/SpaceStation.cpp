#include<bits/stdc++.h>
#include<algorithm>
#include<math.h>
#define MAX 10000002

using namespace std;

long long a[MAX];
/*San Eratos*/
void SNT(int n){
    for(int i=2;i<=sqrt(n);i++)
        if(a[i]==0)
            for(int j=i*i;j<=n;j+=i)
                a[j]=1;
}
int main(){
    long long n,x,r,l;
    SNT(MAX);
    for(cin>>n;n--;){
        cin>>x;
        r = x + 1;
        l = x - 1;
        while(a[r]==1)
            r++;
        while(a[l]==1)
            l--;
        //cout<<l<<" "<<r<<endl;
        if(a[x]==0){
            cout<<2<<endl;
            break;
        }
        switch(a[x]){
            case 0:cout<<0<<endl;break;
            case 1:cout<<min(abs(x-l),abs(r-x))<<endl;break;
        }
    }
    return 0;
}
/*
INPUT
4
4
122
25
65537
OUTPUT
1
5
2
0
*/
