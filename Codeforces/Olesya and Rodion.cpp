#include<bits/stdc++.h>
#include<sstream>
using namespace std;
int main(){
    long long n,t;
    cin>>n>>t;
    string s = static_cast<ostringstream*>(&(ostringstream()<<t))->str();
    if(n<s.size())
        cout<<-1;
    else{
        cout<<s[0];
        for(int i=1;i<n;i++)
            cout<<0;
    }
    return 0;
}
