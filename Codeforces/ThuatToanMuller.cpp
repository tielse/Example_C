#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
using namespace std;
#define epsi 1e-5
float f(float x)
{
	float a=sin(x)-x/2;
	return a;
}
int main()
{
	clock_t aa=clock();
	clock_t bb=clock();
	float x1,x2,x3,h1,h2,a,b,c,gamma,n1,n2,r;
	int dem=0;
	float f(float);
	cin>>x1>>x2;
	if(f(x1)*f(x2)>0)
	{
		cout<<"Nghiem hk nam trong khoang nay!";
		exit(1);
	}
	x3=(x1+x2)/2;
	do
	{
		dem+=1;
		h1=x1-x3;
		h2=x3-x2;
		gamma=h2/h1;
		a=(gamma*f(x1)-f(x3)*(1+gamma)+f(x2))/(gamma*(h1*h1)*(1+gamma));
		b=(f(x1)-f(x3)-a*(h1*h1))/h1;
		c=f(x3);
		if((a==0)&&(b!=0))
		{
			n1=-c/b;
			n2=n1;
		}
		if((a!=0)&&(b==0))
		{
			n1=(-sqrt(-c/a));
			n2=(sqrt(-c/a));
		}
		if((a!=0)&&(b!=0))
		{
			n1=x3-2*c/(b+(sqrt(b*b-4*a*c)));
			n2=x3-2*c/(b-(sqrt(b*b-4*a*c)));
		}
		if(fabs(n1-x3)>fabs(n2-x3))
			r=n2;
		else
			r=n1;
		if(r>x3)
		{
			x2=x3;
			x3=r;
		}
		else
		{
			x1=x3;
			x3=r;
		}
	}while(fabs(f(r))>=epsi);
	cout<<"\n"<<r<<"\n"<<dem<<"\nTime:"<<(double)(bb-aa)/10000<<" sec";
	return 0;
}
