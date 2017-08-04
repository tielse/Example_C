#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main(){
    string s,s1,s2;
    int n,ls,i,dem=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>s;
        i=0;
        while(s.length()<=5){
            s1+=s[i];
            i++;
            if(i==5)
                break;
        }
    }
    cout<<s1<<endl;
    return 0;
}
/*
INPUT
9
do
the
best
and
enjoy
today
at
acm
icpc
14
oh
yes
by
far
it
is
wow
so
bad
to
me
you
know
hey
15
abcde
fghijkl
mnopq
rstuvwx
yzz
abcde
fghijkl
mnopq
rstuvwx
yz
abcde
fghijkl
mnopq
rstuvwx
yz
0
OUTPUT
1
2
6
*/
