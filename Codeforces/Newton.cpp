#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;
#define n 50
#define epsi 1e-5
float f(float x)
{
	float e=x*x-x-2;
	return e;
}
float daoham(float x)
{
	float d=2*x-1;
	return d;
}
int main()
{
	float x[n],x1,t;
	float f(float);
	float daoham(float);
	int i;
	cin>>x1;
	i=1;
	x[i]=x1;
	do
	{
		x[i+1]=x[i]-f(x[i])/daoham(x[i]);
		t=fabs(x[i+1]-x[i]);
		x[i]=x[i+1];
		if(i>100)
		{
			cout<<"Bai toan hk? hoi tu!";
			exit(1);
		}
	}while(t>=epsi);
	cout<<x[i];
	return 0;
}
