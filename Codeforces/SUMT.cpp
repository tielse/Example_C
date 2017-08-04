#include<iostream>

using namespace std;

int main(){
    float a,b;
    int sum=0;
    cin>>a>>b;
    for(int64_t i=++a;i<b;i++){
        sum+=i;
    }
    cout<<"SUM:"<<sum;
    return 0;
}
