#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m,z,ans[100],j,i;
    cin>>n;
    for(i=1;i<=n;i++){
        m=0,z=0;
        for(j=1;j<=10;j++)
            cin>>ans[j];
        for(j=1;j<=10;j++){
            if(ans[j]==18)
                m=1;
            if(ans[j]==17)
                z=2;
        }
        for(j=1;j<=10;j++)
            cout<<ans[j]<<" ";
        switch(m+z){
            case 1:cout<<endl<<"mack"<<endl;    break;
            case 2:cout<<endl<<"zack"<<endl;    break;
            case 3:cout<<endl<<"both"<<endl;    break;
            default: cout<<endl<<"none"<<endl;  break;
        }
    }
    return 0;
}
/*
4
11 99 88 17 19 20 12 13 33 44 11 12 13 14 15 16 66 88 19 20 20 18 55 66 77 88 17 33 44 11 12 23 34 45 56 67 78 89 91 18
*/
