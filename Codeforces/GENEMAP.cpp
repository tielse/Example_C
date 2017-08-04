#include<bits/stdc++.h>

using namespace std;
int n,k;
int64_t res;
char aGen[1000001][2*201];
/*Ham nhap*/
void Input(){
    int i;
    cin>>n>>k;
    for(i=0;i<n;i++)
        cin>>aGen[i];
}
/*Ham xuat*/
void Output(){
    cout<<""<<(long)res;
}
/*Xu ly chuoi*/
void MakePalindrom(char *s){
    int64_t i,j,len=strlen(s);
    int64_t last=len-1;
    char st[2*201];
    for(i=j=0;i<len;i++,j+=2){
        st[j]=s[i];
        st[j+1]=s[last-i];
    }
    st[2*len]=0;
    strcpy(s,st);
}
/*Du lieu sau*/
void Dupdata(){
    for(int64_t i=0;i<n;i++)
        MakePalindrom(aGen[i]);
}
/*Ham Strcmp*/
int f(const void* s1,const void* s2){
    return strcmp((const char *)s1,(const char *)s2);
}
/*Xu ly dem*/
int64_t CountPairStable(int l){
    int64_t i,t=0,sub_t,m;
    for(int i=0;i<n-1;i++){
        if(strlen(aGen[i])>=l){
            for(m=1;(strlen(aGen[i+1])>=l)&&(!strncmp(aGen[i],aGen[i+1],l));m++,i++);
            sub_t=m*(m-1)/2%1000000007;
            t=(t+sub_t)%1000000007;
        }
    }
    return t;
}
/*So sanh giua cac chuoi*/
void Solve(){
    Dupdata();
    qsort((void *)aGen,n,sizeof(aGen[0]),f);
    int64_t res1=CountPairStable(2*k);
    int64_t res2=CountPairStable(2*k+2);
    res=res1-res2;
}
int main(){
    Input();
    Solve();
    Output();
    return 0;
}
/*
INPUT
5 2
aaaaaa
aabdecaa
aaaa
bbcaa
bbaaehaa
*/
/*
OUTPUT
3
*/
