#include<iostream>
#include<cmath>
using namespace std;
#define epsi 0.00001
float f(float x)
{
	float e=x*x*x*x+2*x*x*x-x-1;
	return e;
}
int main()
{
	float a,b,fa,fb,dx,x;
	float f(float);
	cin>>a>>b;
	fa=f(a);
	fb=f(b);
	dx=f(a)*(b-a)/f(a)-f(b);
	while(fabs(dx)>epsi)
	{
		x=a+dx;
		fa=f(x);
		if((fa*fb)<=0)
			a=x;
		else
			b=x;
		fa=f(a);
		fb=f(b);
		dx=f(a)*(b-a)/f(a)-f(b);
	}
	cout<<x;
	return 0;
}
