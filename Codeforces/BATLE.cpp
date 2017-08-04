#include<iostream>
using namespace std;
/*-Cay FenWick-*/
int f[20001]={0},n;
int a[200001],c[200001],r[200001],d[200001];
int insert_f(int x)
{
	while(x<=n)
	{
		f[x]++;
		x+=(x&(-x));
	}
}
int sum_f(int x)
{
	int tg=0;
	while(x>0)
	{
		tg+=f[x];
		x&=(x-1);
	}
	return tg;
}
int main()
{
	int x,k;
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	insert_f(a[1]);
	for(int i=2;i<=n;i++)
	{
		insert_f(a[i]);
		c[i]=i-sum_f(a[i]);
	}
	for(int i=1;i<=n;i++)
	{
		if(c[i]>=k)
		{
			r[i-k]=a[i];
			d[a[i]]=1;
		}
	}
	int id=1;
	for(int i=1;i<=n;i++)
	{
		if(r[i]==0)
		{
			while(d[id])
				id++;
				r[i]=id;
				d[id]=1;
		}
	}
	for(int i=1;i<=n;i++)
	{
		cout<<r[i]<<" ";
	}
	return 0;
}
