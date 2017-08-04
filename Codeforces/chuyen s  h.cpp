#include<iostream>
using namespace std;
int main()
{
	long g;
	int h,p,s;
	cout<<"Nhap so giay:";	
	cin>>g;
	h=g/3600;
	g%=3600;
	p=g/60;
	g%=60;
	s=g;
	cout<<h<<" : "<<p<<" : "<<s;
}