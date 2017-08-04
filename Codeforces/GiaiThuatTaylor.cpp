#include<iostream>
using namespace std;
//Taylor	Pn(x)=(x-xn)Pn-1(x)+Pn(x0)
//Pn-1(x0)=P'(x0)/1!
#define tmp 10
int main()
{
	long long a[tmp],b[tmp],c[tmp];
	int n;
	float x;
	cin>>n>>x;
	for(int i=n;i>0;i--)
	{
		cout<<"\n"<<n-i;
		cin>>a[i];
	}
	cout<<"\n";
	b[n]=a[n];
	c[n]=a[n];
	for(int i=0;i<=n-1;i++)
	{
		for(int j=n-1;j>=i;j--)
			b[j]=b[j+1]*x+a[j];
		c[i]=b[i];
		for(int k=n;k>=i;k--)
			a[k]=b[k];
	}
	cout<<"\nHorner:"<<x;
	for(int i=n;i>=0;i--)
		cout<<c[i];
	return 0;
}
