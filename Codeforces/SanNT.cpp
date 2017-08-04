#include<iostream>

using namespace std;
void san(int64_t n)
{
	bool a[n];
	int64_t j,tmp;
	a[0]=a[1]=false;
	for(tmp=2;tmp<n;tmp++)
		a[tmp]=true;
	for(j=2;2*j<n;j++)
		a[2*j]=false;
		int p=3;
		while(p<=n/2)
		{
			for(j=p;p*j<n;j++)
				a[p*j]=false;
				p++;
				while(!a[p]);
		}
		for(tmp=2;tmp<n;tmp++)
			if(a[tmp])
			cout<<tmp<<" ";
}
int main()
{
	int64_t n;
	cin>>n;
	san(n);
	return 0;
}
