#include<iostream>

using namespace std;

int main()
{
	int n,dem=0,k,a[100],tmp;
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		if(a[i]!=0 && a[i]>=a[k])
			dem++;
	}
		cout<<"\n"<<dem;
	return 0;
}//end main
/*
8 5
10 9 8 7 7 7 5 5

4 2
0 0 0 0

5 1
1 1 1 1 1
*/
