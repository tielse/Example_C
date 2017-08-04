#include<bits/stdc++.h>
#include<cstring>

using namespace std;

int main(){
    string s;
    char s1[1000];
    int n,m,ls,ans,flag=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>m>>s;
        ls=s.size();
        for(int j=ls-1;j>=0;j--){
            if(s[j]<s[j+1]){
                ans=j;
                flag=1;
                break;
            }
        }
        if(flag==1){
            for(int q=ls-1;q>ans;q--){
                if(s[q]>s[ans]){
                    swap(s[q],s[ans]);
                    break;
                }
            }
            //sort(s1+ans+1,s1+ls);
            cout<<s1;
        }else
            cout<<"BIGGEST";
    }
    return 0;
}
