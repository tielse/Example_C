#include<iostream>

using namespace std;
/*Vet Can la mot thuat toan phuong phap sinh*/
int a[1001];
int i,flag=1,n;
void nhap(){
    cin>>n;
    for(int i=1;i<=n;i++){
        a[i]=0;
    }
}
void nhiphan(){
    i=n;
    while(a[i]==1){
        a[i]=0;
        i--;
    }
    if(i==0){
        flag=0;
    }
    a[i]=1;
}
void xuat(){
    for(int i=1;i<=n;i++){
        cout<<" "<<a[i];
    }
    cout<<"\n";
}
int main(){
    nhap();
    while(flag){
        xuat();
        nhiphan();
    }
    return 0;
}
