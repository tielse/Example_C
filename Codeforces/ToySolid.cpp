#include<iostream>
#include<cstdlib>
using namespace std;
int kt(long a[],int n)
{
	int i;	
	while(a[i]==a[i++])	//a[1]==a[2]
	if(i>n-1)	//1>2
	{
		return false;
	}
	return true;
}
int main()
{
	long a[10001],n,m,k,x;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	a[n+1]=-1;	//linh canh
	cin>>m;
	int i=1;
	for(;i<=m;i++)
	{
		cin>>k>>x;	// 1 5
		a[k]=x;	//	a[1]=5
		//cout<<"\n"<<a[k];
		if(kt(a,n+1)==-1)	//kt(1,4)=-1
			break;
	}
	if(i==m)
		cout<<"-1";
	else
		cout<<i;
}
/*
3
4 3 7
4
1 5
2 7
1 7
3 3
*/
