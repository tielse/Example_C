#include<iostream>
#include<cmath>

using namespace std;
int kt(int n)
{
	for(int i=1;i<=n;i++)
		if(n%2!=0)
			return i;
		return 0;
}
int main()
{
	int a;
	cin>>a;
	int kq=kt(a);
		cout<<""<<kq;
	return 0;
}//end
