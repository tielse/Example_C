#include<iostream>
#include <stdio.h>
#include<ctype.h>
using namespace std;
/*Danh mang index*/
int t[101];
int main(){
    string s;
    int dem=0;
    cin>>s;
    for (int i=0;i<s.size();i++)
    {
        if (t[s[i]]==0)
            t[s[i]]=1;
    }
    for (int i=97;i<=122;i++)
        if (t[i]==1)
            dem++;
    if(dem%2==0)
        cout<<"CHAT WITH HER!";
    else
        cout<<"IGNORE HIM!";
    return 0;
}
