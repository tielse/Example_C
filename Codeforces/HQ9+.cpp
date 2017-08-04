#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char k[4]={'H','Q','9'};
	string s;
	cin>>s;
	for(int i=0;i<strlen(k);i++)
	{
		for(int j=0;j<=s.size();j++)
		{
			if(s[j]==k[i])
			{
				cout<<"YES";
					return 0;
			}
		}
	}
	cout<<"NO";
}//end main
