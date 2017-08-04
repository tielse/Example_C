#include<iostream>
#include<cstdio>
#include<conio.h>
using namespace std;
int64_t d[10001],n,r,k,res,i;
int main()
{
	//freopen("APPOINTMENT.INP","r",stdin);
	//freopen("APPOINTMENT.OUT","w",stdout);
	k=1,res=0;
	cin>>n>>r;
	d[n+1]=d[n]+r+1;
	for(i=1;i<=n;i++)
		cin>>d[i];
	i=1;
	while(k<=n)
	{
		if(d[k]-d[i]<=r)
			k++;
		else
			{
				res+=(n-k+1);
				i++;
			}
	}
	cout<<res;
	return 0;
}
/*
4 4
1 3 5 8
*/
