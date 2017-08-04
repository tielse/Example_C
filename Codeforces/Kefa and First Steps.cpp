#include<bits/stdc++.h>
#include<algorithm>
#define MAX 100000001
using namespace std;
int64_t a[MAX]={0};
int main(){
    long n,dem=0,j;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++){
        j=i+1;
        while(j<=n){
            if(a[j]>=a[i]){
                dem++;
            }else{
                i++;
                j++;
            }
            j++;
        }
    }
    cout<<dem;
    return 0;
}
/*
INT
6
2 2 1 3 4 1
OUT
3
*/
