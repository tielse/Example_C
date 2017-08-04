#include<iostream>
#include<algorithm>
#define MAX 100000001
using namespace std;
int64_t a[MAX]={0};
int main(){
    int64_t n,m,sum=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(int i=1;i<=n;i++){
        sum+=a[i];
    }
    if((sum%m)==0){
        cout<<"YES";    return 0;
    }else
        {
            for(int i=1;i<=n;i++){
                sum=a[i]+a[i+1];
                if((sum%m)==0){
                    cout<<"YES";    return 0;
                }
            }
        }
    cout<<"NO";
    return 0;
}
