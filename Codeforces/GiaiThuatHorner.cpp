#include<iostream>
using namespace std;
#define tmp 10
//P=ax+a
int main()
{
	int i,n;
	float p,x;
	p=0.0;
	float a[tmp];
	cin>>n>>x;
	for(i=1;i<=n+1;i++)
	{
	//	cout<<"\n"<<a[i-1];
		cout<<"\n";
		cin>>a[i];
		p=p*x+a[i];
		cout<<"\nX="<<x<<"P="<<p;
	}	
	return 0;
}
