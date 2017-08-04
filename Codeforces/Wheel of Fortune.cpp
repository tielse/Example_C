#include<bits/stdc++.h>

using namespace std;

int main(){
    string s1,s2;
    int t1[100],t2[100],n,k;
    for(cin>>n;n--;){
        cin>>k>>s1>>s2;
        for(int i=0,j=0;i<s1.size(),j<s2.size();i++,j++){
            if(t1[s1[i]]==0)
                t1[s1[i]]=1;
            if(t2[s2[j]]==0)
                t2[s2[j]]=1;
        }
    }
    int i=0;
    int j=0;
    while(i<s1.length() || j<s2.length()){
            cout<<s1[i]<<" "<<s2[j]<<endl;
            while(i<=k || j<=k){
                if(s1[i]==s2[j]){
                    cout<<s1[i]<<" "<<s2[j]<<endl;
                }
            ++i;
            ++j;
            }
        ++i;
        ++j;
    }
    return 0;
}
