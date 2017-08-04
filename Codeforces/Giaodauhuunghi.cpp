#include<iostream>
#include<algorithm>
using namespace std;
int n,a[10001],b[10001];

/*TowPointer*/
int main(){
    int n,i,j,dem=0;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(j=0;j<n;j++)
        cin>>b[j];
    sort(a,a+n);
    sort(b,b+n);
    i = 0,j=0;
    while(j<n){
        if(a[i]<b[j]){
            dem++;  i++;    j++;
        }else
            j++;
    }
    cout<<"SUM:"<<dem;
    return 0;
}
