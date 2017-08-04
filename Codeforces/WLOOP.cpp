#include<iostream>
#include<string>

using namespace std;
int main()
{
	int n,dem=0;
	int tmp[1001];
	string s;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>s;
		for(int j=n-1;j>s.size();j--)
		{
			if(s[i]==tmp[j])
				dem++;
		}
	}
	cout<<dem;
}//end main
