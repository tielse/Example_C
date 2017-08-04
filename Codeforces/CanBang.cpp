#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n,a,b,x,y,z;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b;
		x=(a+b)%a;
		y=(a+b)/a;
		z=pow(2,n);
		if(x&(-x)==x || y&(-y)==y)
			cout<<"YES";
		else
			cout<<"NO";
	}
	return 0;
}
