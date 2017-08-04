#include<iostream>
#include<cstring>

using namespace std;

int QuayLui(string s)
{
    //int f=0;
    static int l=s.size();
    if(l>0)
    {
        cout<<s[l-1];
        l--;
        QuayLui(s);
        //f=1;
    }
    //if(f==0)
      //  return 0;
}
int main()
{
    string s;
    cin>>s;
    QuayLui(s);
    return 0;
}
