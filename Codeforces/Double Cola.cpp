#include<iostream>

using namespace std;
int main()
{
	long n,tmp=6;
	int i=5,hs=1;
	cin>>n;
	if(n<=i)
		i=n;
	else
		while(tmp<=n)
		{
			if(i==5)
			{
				i=1;
				hs*=2;
			}
			else
				i++;
			tmp+=hs;
		}
		if(i==1)
			cout<<"S";
		else
			if(i==2)
				cout<<"L";
			else
				if(i==3)
					cout<<"P";
				else
					if(i==4)
						cout<<"Q";
					else
						if(i==5)
							cout<<"R";
    return 0;
}//end main
