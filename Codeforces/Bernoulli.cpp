#include<iostream>
#include<cstdlib>
#include<cmath>
#define max 50
using namespace std;
int main()
{
	float a[max],b[max];
	int k,i,j,n,l;
	float s,e1,e2,x0,x1,x,t;
	cin>>n;
	e1=1e-5;
	for(i=0;i<=n;i++)
	{
		cin>>a[i];
	}
	for(k=0;k<=n;k++)
		a[k]=a[k]/a[0];
		t: x1=0;	//??????
		for(k=2;k<=n;k++)
			b[k]=0;
			b[1]=1;
			l=0;
			do
			{
				l+=1;
				s=0;
				for(k=1;k<=n;k++)
					s+=b[k]*a[k];
					b[0]=-s;
					x=b[0]/b[1];
					e2=fabs(x1-x);
					x1=x;
					for(k=n;k>=1;k--)
						b[k]=b[k-1];
			}while((l<=50)|| (e2>=e1));
			if(e2>=e1)
			{
				exit(1);
			}
			else
				cout<<x1;
			n-=1;
			if(n!=0)
			{
				a[1]=a[1]+x;
				for(k=2;k<=n;k++)
				a[k]=a[k]+x*a[k-1];
				goto t;
			}
			return 0;
}//end main
