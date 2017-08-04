#include<iostream>
#include<algorithm>
using namespace std;
pair<int,int> doi[100001];
int main()
{
	int dem=0,res=0,n,c,a,b,i;
	cin>>n>>c;
	for(i=1;i<=n;i++)
	{
		cin>>a>>b;
		if(c>=a)
		{
			c+=b;
			res++;
		}
		else
		{
			doi[dem].first=a;
			doi[dem].second=b;
			dem++;
		}		
	}
	if(res==0)
	{
		cout<<res;
	}
	else
	{
		sort(doi,doi+dem);
		for(i=1;i<=dem;i++)
		{
			if(doi[i].first<=c)
			{
				c+=doi[i].second;
				res++;
			}
		}
		cout<<res<<"\n";
		cout<<"\n"<<doi[i].first<<"\n"<<doi[i].second;
	}
	cout<<"\n"<<dem;
	return 0;
}//end main
