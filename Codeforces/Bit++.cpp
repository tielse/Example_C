#include<iostream>

using namespace std;
int main()
{
	string s;
	int n,x=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>s;
			if(s[2]=='+' || s[0]=='+')
				x++;
			else
				if(s[2]=='-' || s[0]=='-')
					x--;
	}
	cout<<"\n"<<x;
	return 0;
}//end main
/*
1
++X
2
X++
--X
*/
