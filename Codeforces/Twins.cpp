#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n,a[101],dem=1,s1=0,s2=0,tmp;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        s1+=a[i];
    }
    sort(a,a+n);
    for(int i=n;i>0;i--){
        s2+=a[i-1];
        tmp=s1-s2;
        if(tmp>=s2)
            dem++;
    }
    cout<<""<<dem;
    return 0;
}
