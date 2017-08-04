
#include<bits/stdc++.h>

using namespace std;

int main(){
    int64_t n,dem=0;
    cin>>n;
    while(n!=0){
        if(n%2==1)
            dem++;
        n/=2;
    }
    cout<<dem;
    return 0;
}
