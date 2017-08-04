#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
#define max 20
using namespace std;
int main()
{
	clock_t aa=clock();
	float a[max],p[max],d[max],x[max];
	int k,j,i,n;
	float e1,e2,x0,x1;
	cin>>n;
	e1=0.0001;
	for(i=0;i<=n;i++)
	{
		cin>>a[i];
	}
	x0=a[0];
	for(i=0;i<=n;i++)
		a[i]=a[i]/x0;
		t:x0=-a[n]/a[n-1];
		j=0;
		do
		{
			j+=1;
			p[1]=x0+a[1];
			d[1]=1;
			for(k=2;k<=n;k++)
			{
				p[k]=p[k-1]*x0+a[k];
				d[k]=d[k-1]*x0+p[k-1];
			}
			x1=x0-p[n]/d[n];
			e2=fabs(x1-x0);
			if(e2>e1)
			x0=x1;
		}while((j<=50)||(e2>=e1));
		if(e2>=e1)
			cout<<"Hk? hoi tu!";
		else
			cout<<" "<<x1;
			n-=1;
			if(n!=0)
			{
				for(k=1;k<=n;k++)
					a[k]=p[k];
					goto t;
			}
			clock_t bb=clock();
			cout<<"\nTime:"<<(double)(bb-aa)/1000<<" sec";
			return 0;
}//end main
