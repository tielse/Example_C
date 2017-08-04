#include<iostream>

using namespace std;
int main()
{
	int n,j,i,tmp=0,dem=0;
	cin>>n;
	for(i=2;i<=n;i++)
	{
		for(j=2;j<i;j++)
			if(i%j==0)
				break;	
			if(j==i)
				tmp+=i;
	}
	for(i=2;i<=n;i++)
	{
		for(j=2;j<i;j++)
			if(tmp==n)
				dem++;
	}
	cout<<""<<dem;
	return 0;
}//end main
