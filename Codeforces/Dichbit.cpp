#include<iostream>
#include<cstdio>
#include<conio.h>
using namespace std;
int main()
{
	int n,bit;
	unsigned int mask;
	char string[10],ch;
	do
	{
		mask=0x8000;
		cin>>n;
		for(int i=0;i<16;i++)
		{
			bit=(mask&n)?1:0;
			cout<<bit;
			if(i==7)
			{
				cout<<" ";
				mask>>=1;	//dich bit 0110>>=1	0011
			}
				cout<<"\nBan mun tinh tip hk?(c/k)?";
				ch=getch();
		}
	}while(ch=='c');
	return 0;
}
