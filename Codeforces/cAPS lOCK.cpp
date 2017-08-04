#include<iostream>
#include<cstring>

using namespace std;
int main()
{
	char s[101],s1[101];
	int dem=0,tmp;
	cin>>s;
	strcpy(s1,s);
	s1[strlen(s)]='\0';
	if(strcmp(s,strupr(s1))==0)
		cout<<strlwr(s);
	else
	{
		strlwr(s1);
		for(int i=0;i<strlen(s);i++)
		{
			if(s[i]==s1[i])
				dem=i;
		}
		if(dem>0)
			cout<<s;
		else
		{
			strlwr(s);
			tmp=int(s[0])-32;
			cout<<char(tmp);
			for(int i=1;i<strlen(s);i++)
				cout<<s[i];
		}
	}
	return 0;
}//end main
