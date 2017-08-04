#include<iostream>

using namespace std;
int main()
{
	int n,dem=0;
	string s;
	cin>>n>>s;
	for(int i=0;i<n,i<s.size();i++)
	{
		if(s[i]==s[i+1])
			dem++;	
	}
	cout<<""<<dem;
	return 0;
}//end main
/*
3
RRG
1
5
RRRRR
4
4
BRBG
0
*/
