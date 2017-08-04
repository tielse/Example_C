#include<iostream>
#include<cstdio>
#include<conio.h>
using namespace std;
int main()
{
	int key,key1;
	while((key=getche())!='x')
	{
		if(key==0)
		{
			key1=getch();
			switch(key1)
			{
				case 59:cout<<"F1";break;
				case 60:cout<<"F2";break;
				case 75:cout<<"Left-Arrow";break;
				default:cout<<"Cac phim khac";break;
			}
		}
		else
			cout<<key;
	}
	return 0;
}
/*
60
*/
