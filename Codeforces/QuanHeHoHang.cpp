#include<iostream>
#include<ctime>
#include<cstring>
using namespace std;
int64_t ans=0,b[1024]={0};
string s;
int main()
{
	clock_t aa=clock();
	int n,x,l;	
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>s;
		l=s.size();
		x=0;
		for(int j=0;j<l;j++)
		x|=(1<<(s[j]-48));
		++b[x];
	}
	for(int i=0;i<1024;i++)
		for(int j=i;j<1024;j++)
			if((i&j)!=0)
			{
				if(i!=j)
					ans+=b[i]*b[j];
				else
					ans+=(b[i]*b[i-1])/2;
			}
			cout<<ans;
			clock_t bb=clock();
			cout<<"\nTime:"<<(double)(bb-aa)/1000<<" sec";
			return 0;
}
