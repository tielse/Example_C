#include<iostream>
#include<ctime>
#include<iomanip>
#include<cmath>
using namespace std;
int64_t b[4000010]={0},c[4000010]={0},res,x,p,rx,rp;
int64_t n,nb,pp,m,xx,l,r,g,u,v,k,fxu,fxv,sl2=0;
double ans;
void xly_0()
{
	int64_t tu=0,tv=0;
	res=0;
	cin>>l>>r;
	int64_t u1,v1,s1,slu=1,slv=0;
	u=nb+l-1;
	v=nb+r-1;
	s1=r-l+1;
	k=1;
	tu=b[u];
	if(u!=v)
	{
		tv=b[v];
		u1=u/2;
		v1=v/2;
		slv=1;
		while(u1!=v1)
		{
			if((u&1)==0)
			{
				slu+=k;
				tu+=(b[u+1]+slu*c[u1]);
			}
			else
				tu+=slu*c[u1];
			if((v&1)==1)
			{
				slv+k;
				tv+=(b[v-1]+slv*c[v1]);
			}
			else
				tv+=slv*c[v1];
			u=u1;
			v=v1;
			u1=u/2;
			v1=v/2;
			k<<=1;
		}
	}
	while(u1!=0)
	{
		res+=(s1*c[u1]);
		u1/=2;
	}
		res+=tu+tv;
		ans=(double)res/(double)(r-l+1);
		cout<<fixed<<setprecision(4)<<ans<<"\n";
}
void upd_t(int64_t y,int64_t z)
{
	int64_t t;
	while(y>1)
	{
		t=y/2;
		b[t]+=z;
		y=t;
	}
}
void xly_1()
{
	fxu=0;
	fxv=0;
	cin>>l>>r>>xx;
	u=nb+l-1;
	v=nb+r-1;
	k=1;
	while(u!=v)
	{
		if((u&1)&&fxu==0)
		{
			b[u]+=k*xx;
			fxu=1;
			c[u]+=xx;
			upd_t(u,k*xx);
		}
		else
			if((u&1)==0 &&fxu==1 &&u+1!=v)
			{
				b[u+1]+=k*xx;
				c[u+1]+=xx;
				upd_t(u+1,k*xx);
			}
			if(((v&1)==0) && fxv==0)
			{
				b[v]+=k*xx;
				c[v]+=xx;
				fxv=1;
				upd_t(v,k*xx);
			}
			else
				if((v&1)==1&&fxv==1&&u+1!=v)
				{
					b[v-1]+=k*xx;
					c[v-1]+=xx;
					upd_t(v-1,k*xx);
				}
				k<<=1;
				u/=2;
				v/=2;
	}
	if((fxu==0)&&(fxv==0))
	{
		b[u]+=k*xx;
		c[u]+=xx;
		upd_t(u,k*xx);
		return;
	}
	k>>=1;
	if(fxu==0)
	{
		b[2*u]+=k*xx;
		c[2*u]+=xx;
		upd_t(2*u,k*xx);
		return;
	}
	if(fxv==0)
	{
		b[2*u+1]+=k*xx;
		c[2*u+1]+=xx;
		upd_t(2*u+1,k*xx);
	}
}
void cbi()
{
	for(int i=nb-1;i>0;i--)
		b[i]=b[2*i]+b[2*i+1];
}
int main()
{
	clock_t aa=clock();
//	freopen("CPI.INP","r",stdin);
//	freopen("CPI.OUT","w",stdout);
	cin>>n>>m;
	k=n-1;
	for(int i=20;i>=0;i--)
		if((k>>i)&1)
		{
			nb=1<<(i+1);
				break;
		}
		for(int i=0;i<n;i++)
		cin>>b[nb+i];
		cbi();
		for(int i=1;i<=m;i++)
		{
			cin>>g;
			if(g)
				xly_1();
				else
					xly_0();
		}	
		clock_t bb=clock();
		cout<<"\nTime: "<<(double)(bb-aa)/1000<<" sec";
		return 0;
}
