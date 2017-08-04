#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]>='A' && s[i]<='Z')	
			s[i]+=32;
			if(s[i]!=97 && s[i]!=111 && s[i]!=121 && s[i]!=101 && s[i]!=117 && s[i]!=105)
				cout<<"."<<s[i];
	}					
	return 0;
}
/*
tour

Codeforces

aBAcAba
*/
