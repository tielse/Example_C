#include<bits/stdc++.h>
#include<algorithm>
#define MAX 100000
using namespace std;

int main(){
    int n,x,y,gap[MAX],set_kc,j=0,a[MAX],t=0;
    cin>>n>>x>>y;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<n;i++){
        gap[i]=a[i]-a[i+1];
    }
    set_kc=0;
    for(int i=x;i<=y;i++){
        set_kc=max(set_kc,gap[i]);
        if(set_kc==gap[i])
            t=i;
    }
    cout<<t<<endl;
    return 0;
}
/*
INPUT
5 2 4
100
90
82
70
65
5 2 4
100
90
80
75
65
3 1 2
5000
4000
3000
4 2 3
10000
10000
8000
8000
4 2 3
10000
10000
10000
8000
5 2 3
100
80
68
60
45
0 0 0
OUTPUT
3
4
2
2
3
2
*/
