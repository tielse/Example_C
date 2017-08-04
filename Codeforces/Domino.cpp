#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
	clock_t ta=clock();
	int tong=0,dai,rong;
	cin>>rong>>dai;
	tong=rong*dai;
	if(1<dai<16 && 1<rong<16)
		tong/=2;
	else
		exit(1);
	cout<<"\n"<<tong;
	clock_t tb=clock();
	cout<<"\nTime:"<<(double)tb-ta/1000<<" sec";
	return 0;
}
