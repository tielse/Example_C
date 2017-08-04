#include<iostream>

using namespace std;
int64_t a,b,dem1=0,dem2=0,uocso[100000],i,j,tmp;
int main()
{
	cin>>a>>b;
	for(i=2;i<=b;i++)
	{
		for(j=2;j<=(b/2);j++)
		{
			uocso[i*j]+=i;
		}
		if(uocso[i]>=i)
			dem1++;
			cout<<" "<<uocso[i];
	}
	for(i=2;i<=a;i++)
	{
		if(uocso[i]>=i)
			dem2++;
	}
	cout<<"\n "<<dem1<<" "<<dem2;
	tmp=dem1-dem2;
	cout<<"\n"<<tmp;
	return 0;
}//end main
