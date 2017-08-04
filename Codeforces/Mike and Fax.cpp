#include<iostream>
#include<cstring>

using namespace std;
int main()
{
    string s;
    int k,dem=0,i;
    cin>>s>>k;
    for(i=1;i<s.length();i++)
        if(s[i+1]==s[i-2] && s[i]==s[i-1])
            dem++;
    if(dem==k || s.length()==k)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
