#include<iostream>
#include<cstring>

using namespace std;

int main(){
    string s1="hello";
    string s;
    cin>>s;
    int tmp=0,i=0,j=0;
    while(i<s1.size()){
        for(j=tmp;j<s.size();j++)
        if(s[j]==s1[i]){
           tmp=j+1;   break;
        }
        if(j==s.size()){
            cout<<"NO"; return 0;
        }
        i++;
    }
    cout<<"YES";
    return 0;
}
