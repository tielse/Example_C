#include<iostream>

using namespace std;

int main()
{
	int n,x=0,y=0,z=0,t=0,du=0,xe=0,tmp=0;
	cin>>n;
	int a[100001];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		switch(a[i])
		{
			case 1:x++;break;	
			case 2:y++;break;
			case 3:z++;break;
			case 4:t++;break;
		}
	}
	du=(x+z*3)%4+y*2;
	tmp=(y*2)/4;
	if(z>x)
	{
		xe+=z;
		if((y*2%4)!=0)
			xe+=tmp+1;
		else
			xe+=tmp;
	}
	else
	{
		xe=(x+z*3)/4;
		if(du%4!=0)
			xe+=du/4+1;
		else
			xe+=du/4;
	}
	xe+=t;
	cout<<" "<<xe;
return 0;
}//end main
