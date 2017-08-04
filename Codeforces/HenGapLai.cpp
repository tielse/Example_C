#include<fstream>
#include<iostream>
/*To chuc linh canh*/
using namespace std;
int64_t d[10]={0},r,n,k,res;
int main()
{
	int i;
	k=1,res=0;
	cin>>n>>r;
	for(i=0;i<n;i++)
	{
		cin>>d[i];
		d[n+1]=d[n]+r+1;
	}	
	for(i=1;i<n-1;i++)
	{
		
		while(d[k]-d[i]<=r)
			k++;
		res+=k-n+1;	
	}
	cout<<res;
	return 0;
}
