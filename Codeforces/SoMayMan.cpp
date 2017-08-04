#include<iostream>

using namespace std;
int64_t a[100000001]={0},n,t;

int nhiphan()
{
	do
	{
		if(n%2!=0)
			a[t++]=1;
		else
			a[t++]=0;
			n/=2;
	}while(n);
	for(int i=t-1;i>=0; i--)
		return a[i];

}

int main()
{
	cin>>n;
	int kq=nhiphan();
	switch(kq)
	{
		case 0:cout<<"4";break;
		case 1:cout<<"7";break;
	}
	return 0;
}//end main
