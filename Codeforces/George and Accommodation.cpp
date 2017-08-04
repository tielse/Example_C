#include<iostream>
#include<algorithm>

using namespace std;

pair<int,int> s[101];
int n,dem,p,q;
int main(){
    dem=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>p>>q;
        s[i].first=p;
        s[i].second=q;
    }
    sort(s,s+n+1);
    for(int i=1;i<=n;i++){
        if(s[i].first!=s[i].second && s[i].first+1!=s[i].second){
                dem++;
        }
    }
    cout<<""<<dem;
    return 0;
}
