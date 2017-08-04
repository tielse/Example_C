#include<iostream>
#include<cmath>
using namespace std;
#define epsi 0.00001
float f(float x)
{
	float a=x*x*x*x+2*x*x*x-x-1;
	return 0;
}
int main()
{
	float x1,x2,x3,y1,y2,y3;
	float f(float);
	int max,dem=0;
	cin>>x1>>x2>>max;
	x1=f(x1);
	y1=f(x2);
	if((y1*y2)>0)
	{
		cout<<x1<<"\n";
		cout<<x2<<"\n";
		cout<<y1<<"\n";
		cout<<y2<<"\n";
	}
	do
	{
		x3=(x1-x2)/2;
		y3=f(x3);
		y1=f(x1);
		if(y1*y3>0)
			x1=x3;
		else
			x2=x3;
		dem+=1;
	}while(((abs((y3-y1))>epsi||(dem<max))));
	if(dem>max)
	{
		cout<<max<<"\n";
		cout<<x1<<"\n";
		cout<<x2<<"\n";
		cout<<y3<<"\n";
	}
	else
	{
		cout<<dem<<"\n";
		cout<<x3<<"\n";
	}
	return 0;
}
