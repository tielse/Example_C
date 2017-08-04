#include<bits/stdc++.h>
#include<cstring>
using namespace std;
string s,str;
int n,init;
int main(){
        cin>>n;
        for(int k=1;k<=n;k++){
                cin>>s;
        for(int i=0;i<s.size();i++){
            if(s[i]!=s[i+1])
                init++;
        }
        cout<<init<<endl;
    }
    return 0;
}
