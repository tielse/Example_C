#include<iostream>

using namespace std;

int main(){
    long long n;
    int tmp=6,i=5,hs=1;
    cin>>n;
    if(n<=i)
        i=n;
    else
    while(tmp<=n){
        if(i==5){
            i=1;
            hs*=2;
        }else
            i++;
        tmp+=hs;
    }
    switch(i){
        case 1:cout<<"Sheldon";break;
        case 2:cout<<"Leonard";break;
        case 3:cout<<"Penny";break;
        case 4:cout<<"Rajesh";break;
        case 5:cout<<"Howard";break;
    }
    return 0;
}
