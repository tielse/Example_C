#include<iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int i=0;
	int dau;
	if(n>99)
	{
		int kq=0;
		do
		{
			int tam=n;
			int i=0;
			int dau=0;
			do
			{
				dau=tam%10;
				i++;	
			}while(tam/=10);
			for(int j=0;j<i-1;j++)
			{
				dau*=10;	
			}
			kq=n-dau;
			n=kq;
		}while(kq>99);
		cout<<kq<<"\n";		
	}
	else
		cout<<"Ket qua= "<<n;
	
}