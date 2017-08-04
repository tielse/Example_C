#include<bits/stdc++.h>

using namespace std;

int main(){
    int test;
    /*test so bo test*/
    cin>>test;
    while(test>0)
    {
        /*n so ngay, p tong tien*/
        long n,p;
        cin>>n>>p;
        /*ai so co phieu*/
        int a[n+1];
        for(int i=0;i<n;i++)
            cin>>a[i];
        /*tim so tien mua va ban co loi nhuan cao nhat*/
        long maxx=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
                maxx=max(maxx,(a[j]-a[i])*(p/a[i]));
        }
        cout<<maxx<<endl;
        test--;
    }
}
/*
INPUT
2
12 1000000
99 100 101 102 100 99 97 101 102 105 104 104
5 1000
5 4 3 2 1
OUTPUT
82472
0
*/
