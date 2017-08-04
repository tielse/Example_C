#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	//freopen("SUM.INP","r",stdinp);
	//freopen("SUM.OUT","w",stdout);
	int64_t n,i=1,tong=0;
	cin>>n;
	for(;i<=sqrt(n);i++)
	{
			tong+=i*i+i+1;
	}
	cout<<tong;
	return 0;
}//end main
