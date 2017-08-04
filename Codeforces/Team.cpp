#include<iostream>

using namespace std;
int main()
{
	int n,a,b,c,x,dem=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a>>b>>c;
		x=a+b+c;
		if(x>=2)
            dem++;
	}
	cout<<""<<dem;
	return 0;
}
