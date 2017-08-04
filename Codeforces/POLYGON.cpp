#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	int64_t s,n,x[10005],y[10005],r=0,s2=0;
	double res;
	cin>>n;
	for(int64_t i=0;i<n;i++)
	{
		cin>>x[i]>>y[i];
		x[n+1]=x[1];
		y[n+1]=y[1];
	}
	for(int64_t i=0;i<n;i++)
	{	
		s2+=(x[i]*y[i+1]-x[i+1]*y[i]);
		//s2+=2*s;
		if(x[i]==x[i+1]||y[i]==y[i+1])
		{
			r+=(abs(x[i]-x[i+1])+abs(y[i]-y[i+1]));
			res=(double)(2*s2-r)/2;
		}	
	}
	cout<<res;
	return 0;
}
/*
5
0 0
-2 2
-2 -1
2 -2
2 0
*/
