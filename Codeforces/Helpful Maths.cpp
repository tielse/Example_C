#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    string s;
    int a[100],n=0,dem=0;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]!='+'){
            a[n]=s[i]-'0';
            n++;
        }
    }
    sort(a,a+n);
    for(int i=0;i<n-1;i++){
        cout<<a[i]<<'+';
    }
    cout<<a[n-1];
    return 0;
}
