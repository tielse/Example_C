#include<bits/stdc++.h>
#define MAX 100000
using namespace std;
int n,m,a[MAX];
int BinarySearch(int a[],int n,int key){
    int mid;
    int l=1;
    int r=n;
    mid=(l+r)/2;
    while(l<=r && a[mid]!=key){
        if(a[mid]<key)
            l=mid+1;
        else
            r=mid-1;
        mid=(l+r)/2;
    }
    if(a[mid]==key)
        return 1;
    else
        return 0;
}
int main(){
    int res;
    cin>>n>>m;
    for(int i=0;i<m;i++)
        cin>>a[i];
    for(int i=0;i<m;i++){
        res=BinarySearch(a,i,n);
    }
    if(res==1)
        cout<<res;
    else
        cout<<"NULL";
    return 0;
}
/*
INPUT
5 2
7
4
OUTPUT
3
*/
