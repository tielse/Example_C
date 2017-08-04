#include<iostream>

using namespace std;
int l,r,res=0;
int64_t a[100001]={0};
void kt(int n)
{
	for(int i=1;i<=n;i++)
		a[i]=1;
		for(int i=2;i<=(n/2);i++)
			for(int j=2;j<=(n/i);j++)
					a[i*j]+=i;
}
int main()
{
	cin>>l>>r;
	kt(r+1);
	for(int i=1;i<=r;i++)
		if(a[i]>r)
			res++;
			cout<<" "<<res;
			return 0;
}
/*
1 50
9
*/
