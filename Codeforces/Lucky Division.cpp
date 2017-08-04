#include<iostream>

using namespace std;
int f(int n){
    while(n>0){
        if((n%10)!=4 && (n%10)!=7)
            return 0;
        n/=10;
    }
    return 1;
}
int main(){
    int n;
    cin>>n;
    if(f(n)){
        cout<<"YES";    return 0;
    }
    for(int i=4;i<=n/2;i++){
        if(f(i)==1 && n%i==0){
            cout<<"YES";    return 0;
        }
    }
    cout<<"NO";
    return 0;
}
