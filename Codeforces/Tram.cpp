#include<iostream>

using namespace std;
int main()
{
	int n,a[1001],b[1001],i,tong=0,max=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i];
		tong+=b[i]-a[i];
		if(tong>max)
			max=tong;
	}
	cout<<max;
	return 0;
}//end main
