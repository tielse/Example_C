#include<iostream>
using namespace std;
/*Nhan 2 da thuc*/
#define t 10
int main()
{
	int n,m,l,j,k,p;
	float a[t],b[t],c[2*t];
	cin>>n>>m;
	for(int i=1;i<=n+1;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=m+1;i++)
	{
		cin>>b[i];
	}
	l=n+m;
	for(int i=1;i<=l+1;i++)
	{
		if(i<=(n+1))
			j=i;
		else
			j=n+1;
		if(i<=(m+1))
			p=1;
		else
			p=i-m;
			c[i]=0;
		for(int h=k;h<=j;h++)
		c[i]=c[i]+a[h]*b[i-p+1];
	}
	for(int i=1;i<=l+1;i++)
		cout<<a[i];
		return 0;
}
