#include<iostream>
using namespace std;
int a[100000009]={0},t[10005]={0},n,tmp;
int main()
{
//	freopen("JUMPS.INP","r",stdin);
//	freopen("JUMPS.OUT","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>t[i];
		if(a[i]>t[i])
			tmp=t[i];
	}
	cout<<""<<tmp;
	return 0;
}
