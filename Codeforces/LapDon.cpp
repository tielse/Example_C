#include<iostream>
#include<cmath>
using namespace std;
float f(float x)
{
	float a=exp((1./3.)*log(1000-x));
	return a;
}
int main()
{
	int n;
	float x,x1;
	float f(float);
	cin>>n>>x1;
	x=x1;
	for(int i=1;i<=n;i++)
		x=f(x);
	cout<<"x="<<x;
	return 0;
}
/*
1 3 2 5 9 8 75 87
*/
