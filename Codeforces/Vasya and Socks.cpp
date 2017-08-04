#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m,res=0,i=1;
    cin>>n>>m;
    int ans=n;
    while(i!=0){
        res+=ans/m;
        ans=ans/m+ans%m;
        if(ans<m)
            i=0;
    }
    cout<<res+n<<endl;
    return 0;
}
/*
2 2
3
9 3
13
1 3
2
2 3
2
*/
