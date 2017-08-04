#include<iostream>

using namespace std;
int main()
{
	int n,max,a[1001],b[1001];
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		for(int j=1;j<=n;j++)
		{
			if(j<i && a[j]<=a[i])
			{
				b[j]=a[i];
				max=b[j]+1;
			}
			else
				break;
		}
	}
	cout<<""<<max;
	return 0;
}//end main
/*
6
1 2 5 4 6 2
*/
