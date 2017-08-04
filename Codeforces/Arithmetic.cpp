#include<bits/stdc++.h>

using namespace std;
string s="+-*/";
int n;
float a,b,c,sum;
float mapping(float a,float b,float c,char ch,char kt){
    switch(ch){
        case '+':{
            switch(kt){
                case '+':return a+b+c;
                case '-':return a+b-c;
                case '*':return a+(b*c);
                case '/':return a+(b/c);
            }
        }
        case '-':{
            switch(kt){
                case '+':return a-b+c;
                case '-':return a-b-c;
                case '*':return a-(b*c);
                case '/':return a-(b/c);
            }
        }
        case '*':{
            switch(kt){
                case '+':return (a*b)+c;
                case '-':return (a*b)-c;
                case '*':return a*b*c;
                case '/':return (a*b)/c;
            }
        }
        case '/':{
            switch(kt){
                case '+':return a/b+c;
                case '-':return a/b-c;
                case '*':return a/(b*c);
                case '/':return a/b/c;
            }
        }
    }
}
int main(){
    for(cin>>n;n--;){
        cin>>a>>b>>c>>sum;
        int flag=0;
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                if(mapping(a,b,c,s[i],s[j])==sum || mapping(a,c,b,s[i],s[j])==sum || mapping(b,a,c,s[i],s[j])==sum || mapping(b,c,a,s[i],s[j])==sum || mapping(c,a,b,s[i],s[j])==sum || mapping(c,b,a,s[i],s[j])==sum ||
                   mapping(-a,b,c,s[i],s[j])==sum || mapping(-a,c,b,s[i],s[j])==sum || mapping(-b,a,c,s[i],s[j])==sum || mapping(-b,c,a,s[i],s[j])==sum || mapping(-c,a,b,s[i],s[j])==sum || mapping(-c,b,a,s[i],s[j])==sum){
                        cout<<"Possible"<<endl;
                        flag=1;
                        break;
                   }
                   //cout<<"#### : "<<s[i]<<" "<<s[j]<<endl;
            }
            if(flag)
                break;
        }
        if(!flag)
            cout<<"Impossible"<<endl;
    }
    return 0;
}
/*
INPUT
4
2 6 1 12
1 2 3 4
7 5 5 5
2 5 8 20
OUTPUT
Possible
Possible
Impossible
Possible
*/
