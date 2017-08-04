#include<iostream>

using namespace std;
int main()
{
	long n,a[3000],b[3000],m,dem=0,tmp;
	cin>>n>>m;	
	for(int i=0;i<=n;i++)
	{
		cin>>a[i]>>b[i];
		for(int j=0;j<=m;j++)
			if(a[i]==b[i])
				break;
			else
				dem++;
	}
	cout<<" "<<dem;
	return 0;
}
