#include<iostream>
using namespace std;
int main()
{
	long long x,tmp1,tmp2,n,coso;
	cin>>n;
	for(long long i=2;i<n-2;i++)
	{
		x=n;
		tmp1=x%i;
		while(x>0)
		{
			x/=i;
			tmp2=x%i;
			if(tmp1!=tmp2)
				break;		
		}
		if(x==0)
		{
			coso=i;
			break;
		}
	}
	cout<<coso;
	return 0;
}
/*219*/
