#include<iostream>
#include<ctime>
using namespace std;
int main()
{
	long long n,r=2,res=1,t=100000007;
	//clock aa=clock();
	cin>>n;
	n--;
	while(n>0)
	{
		if(n&1)	res=(res*r)%t;
		r=(r*r)%t;
		n>>=1;
	}
//	clock bb=clock();
	//cout<<"\nTime:"<<double(bb-aa)/1000<<" sec";
	cout<<res;
	return 0;
}
