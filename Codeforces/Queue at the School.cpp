#include<bits/stdc++.h>

using namespace std;
string s;
int n,t;
int main(){
    cin>>n>>t>>s;
    for(int j=1;j<=t;j++){
        for(int i=0;i<s.size();i++){
            if(s[i]=='B' && s[i+1]=='G'){
                swap(s[i],s[i+1]);
                i++;
            }
        }
    }
    cout<<s;
    return 0;
}
/*
5 1
BGGBG
5 2
BGGBG
4 1
GGGB
*/
