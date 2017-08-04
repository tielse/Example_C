#include<iostream>
using namespace std;
int main()
{
	int n,m,a,b;
	cin>>n>>m>>a>>b;
	long cp;
	if(1<=n && m>=1 && 1<=a<=1000 && 1<=b<=1000)
		cp=n*a-(m%b);
		cout<<cp;
	return 0;
}
