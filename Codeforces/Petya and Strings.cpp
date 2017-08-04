#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char s1[101],s2[101];
	cin>>s1>>s2;
	strlwr(s1);
	strlwr(s2);
	cout<<strcmp(s1,s2);	//ham so san tra ve gia tri so nguyen
	return 0;
}//end main
