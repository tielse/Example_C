#include<bits/stdc++.h>
#include<algorithm>
#define MAX 100000001
using namespace std;
pair<int,int> s[MAX];
int main(){
    int a,n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a;
        s[i].first=a;
        s[i].second=i;
    }
    sort(s,s+n+1);
    for(int i=1;i<=n;i++)
        cout<<s[i].first<<" "<<s[i].second<<"\n";
    return 0;
}
