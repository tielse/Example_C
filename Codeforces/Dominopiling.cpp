#include<iostream>
#include<ctime>
using namespace std;

int main()
{
	clock_t aa=clock();
	int m,n,dem;
	cin>>m>>n;
	dem=(m*n)/2;
	cout<<dem;
	clock_t bb=clock();
	cout<<"\nTime: "<<(double)bb-aa/1000<<" sec";
	return 0;
}//end main
