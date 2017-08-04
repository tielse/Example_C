#include<iostream>
#include<algorithm>

using namespace std;
int main(){
    int n_A,n_B,k,m,index,tmp=1;
    int A[100005];
    cin>>n_A>>n_B>>k>>m;
    k--;
    for(int i=0;i<n_A;i++)
        cin>>A[i];
    int num=A[k];
    for(int i=0;i<n_B;i++){
        cin>>A[i];
        if(num<A[i] && tmp==1){
            tmp=0;
            index=i;
        }
    }
    if(n_B-index>=m && tmp==0)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
