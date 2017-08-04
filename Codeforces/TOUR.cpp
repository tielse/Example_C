#include<iostream>
#include<algorithm>

using namespace std;
int n,m,k,lt,t[100001],b[100001]={0},res[100001]={0},q[100001]={0},s[100001]={0},i;
pair<int,int> r[100002];
void insert(int i)
{
	if(i==0)
		s[0]++;
	else
		while(i<=n)
		{
			s[i]++;
			i+=(i&(-i));
		}
}
int sum(int i)
{
	int r;
	r=s[0];
	while(i>0)
	{
		r+=s[i];
		i&=(i-1);
	}
	return r;
}
int main()
{
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>r[i].first;
		r[i].second=i;
	}
	sort(r+1,r+n+1);
	for(i=1;i<=n;i++)
		if(r[i].first==r[i-1].first)
			q[r[i].second]=r[i-1].second;
			cin>>m;
	for(i=1;i<=m;i++)
	{
		cin>>b[i];
		cin>>r[i].first;
		r[i].second=i;
	}
	sort(r+1,r+m+1);
	k=0;
	for(i=1;i<=m;i++)
	{
		if(k!=r[i].first)
		{
			for(int j=k+1;j<=r[i].first;j++)
			insert(q[j]);
			k=r[i].first;
		}
		lt=b[r[i].second]-1;
		res[r[i].second]=sum(lt)-lt;
	}
	for(i=1;i<=m;i++)
	cout<<"\n"<<res[i];
	return 0;
}//end main
