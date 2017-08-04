#include<iostream>

using namespace std;
int main()
{
	string s;
	int dem=0;
	cin>>s;
	for(int i=0;i<=s.size()-1;i++)
	{
		if(s[i]==s[i+1])
		{
			dem++;
			if(dem>=6)
			{
				cout<<"YES";
					return 0;
			}	
		}
		else
			dem=0;					
	}
	cout<<"NO";
}//end main
/*
001001
NO
1000000001
YES
*/
