#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int64_t s[40000001]={0};
void sannt(int nt)
{
	for(int64_t i=2;i<sqrt(nt)+1;i++)
		if(s[i]!=0)
		for(int64_t j=i*i;j<nt;j+=i)
			s[j]++;
}
int main()
{
	freopen("PERPECT.INP","r",stdin);
	freopen("PERPECT.OUT","w",stdout);
	int64_t n,tmp,i=2;
	cin>>n;
	sannt(n);
	for(;i<=n;i++)
	{
		tmp=pow(2,i-1)*(pow(2,i)-1);
		if(tmp<n)
		{
			cout<<" "<<tmp;
		}
	}
	if(i==n)
		cout<<" ";
	return 0;
}//end main
