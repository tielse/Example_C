#include<iostream>
using namespace std;
int64_t l[100000000],r[100000000],z,n,a,b,u,w;
int main()
{
	//k=1;
	int max,min,dr=1,x,y,k=1;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b>>u>>w;
		if(l[k])
			k=l[k];
		else
		{
			k=r[k];
			x=l[k];
			//y=dr[k];
			max=x;
		}
		if(dr)
			z=x-n;
		else
			z=y-n;
		if(z<0)
		{
			n=-1;
				return 0;
		}
		if((dr==1 && z>=y-1)||(dr==0)&&z>x)
			return 0;
		if(y>max)
		{
			max=y;
			min=x;
		}
		if(min>y)
			min=y;
		n=max-min+(min-z)*2-dr;
	}
	cout<<n;
	return 0;
}
