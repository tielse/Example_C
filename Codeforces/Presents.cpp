#include<bits/stdc++.h>

using namespace std;
pair<int,int> p[101];
int main(){
    int n,t;
    cin>>n;
    p[n+1];
    for(int i=1;i<=n;i++){
        cin>>t;
        p[i].first=t;
        p[i].second=i;
    }
    sort(p,p+n+1);
    for(int i=1;i<=n;i++)
        cout<<p[i].second<<" ";
    return 0;
}
