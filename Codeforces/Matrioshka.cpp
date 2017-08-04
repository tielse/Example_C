#include<iostream>
#include<vector>
using namespace std;
int b[20002]={0},t,d[20002];
int main()
{
	int n,nx,r,q=0,p=0;
	pair<int ,int > s[20002];
	//vector<int,pair<int ,int >> s;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>t;
		b[t]++;
	}
	n=nx;
	for(int i=1;i<=nx+1;i++)
		{
			r=b[i]-q;
			if(r>=0)
			{
				for(int j=1;j<=r;j++)
					d[j++]=i;
			}
			else
				{
					for(int j=1;j<=-r;j++)
						s[p++]=make_pair(d[j--],i-1);
				}
				q+=r;
		}
		cout<<p;
		for(int i=1;i<=n;i++)
		{
			cout<<""<<s[i].first<<""<<s[i].second;
		}
		return 0;
}
