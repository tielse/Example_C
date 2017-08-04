#include<bits/stdc++.h>

using namespace std;
string s;
int n,a,b,t;
int main(){
    for(cin>>n;n--;){
        cin>>a>>b>>s;
        for(int i=0;i<s.size();i++){
            t=0;
            while(t<b){
                cout<<s[i];
                t++;
            }
        }
    }
    return 0;
}
