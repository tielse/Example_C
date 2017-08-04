#include<iostream>

using namespace std;

int main(){
    int n,a[1001];
    int max=0,dem1=0,tmp=0,dem2=0;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
            dem1++;
        }
        if(a[0]<max){
            a[0]+=max--;
            dem2++;
        }else{
            tmp+=dem1*dem2;
        }
    }
    cout<<""<<tmp;
    return 0;
}
