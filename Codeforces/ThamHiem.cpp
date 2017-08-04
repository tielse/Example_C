#include<fstream>
using namespace std;
ifstream fi("expedition.inp");
ofstream fo("expedition.out");
int a[300001],b[300001]={0},q[300001],n,p=0;
int main()
{
	int i;
	fi>>n;
	for( i=n-1;i<n;i++)
	{
		if(b[a[i]]>=q[p])
		{
			while(b[a[i]]>q[p])
				p--;
			if(b[a[i]]<q[p])
				p++;
			p++;
		}
		q[p]=i;
		b[a[i]]=i;
	}
	if(q[i]!=1)
		fo<<"0";
	else
	{
		fo<<p<<"\n";
		i=p-1;
		fo<<q[i]<<" ";
	}
	return 0;
}
