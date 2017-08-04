#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,a,b,c,d,e,f,dem,color,res=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a>>b>>c>>d>>e>>f;
        dem=0;
        if((a+b+c)>(d+e+f)){
            dem=1;
            color=0;
            if(a>d)
                color=2;
            else
                if(b>e && a==d)
                    color=2;
                else
                    if(c>f && b==e)
                        color=2;
        }else{
            color=0;
            if(a>d)
                color=2;
                else
                    if(b>e && a==d)
                        color=2;
                    else
                        if(c>f && b==e)
                            color=2;
        }
        //cout<<color<<" "<<dem<<" "<<endl;
        res=color+dem;
        //cout<<res<<" "<<endl;
            switch(res){
                    case 0:cout<<"none"<<endl;    break;
                    case 1:cout<<"count"<<endl;   break;
                    case 2:cout<<"color"<<endl;  break;
                    case 3:cout<<"both"<<endl;    break;
                }
    }
    return 0;
}
/*
5
10 5 15 10 1 0
10 5 15 10 6 10
12 5 10 5 20 30
10 0 15 10 5 30
10 5 15 10 5 15
*/
