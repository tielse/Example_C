#include<iostream>
#include<cmath>

using namespace std;
#define m 5
float f(float x)
{
	float s=sqrt(log(x)+3);
	return s;
}
int main()
{
	float a[m];
	float epsi,y,n;
	int z=0,i;
	float f(float);
	cin>>a[1]>>epsi;
	while(z<=20)
	{
		for(i=2;i<=4;i++)
			a[i]=f(a[i-1]);
			n=a[4]-2*a[3]+a[2];
			if((fabs(n)<1e-09)||(fabs(a[1]-a[2])<epsi*fabs(a[1])))
				z=20;
			else
			{
				y=a[2]-(a[3]-a[2])*(a[3]*a[2])/n;
				if(z>20)
					cout<<"Hk? hoi tu!";
				a[1]=y;
			}
			z+=1;				
	}
	cout<<" "<<y;
	return 0;
}//end main
/*
	Aitken 1/2x*sqrt(log(x)+3)
*/
