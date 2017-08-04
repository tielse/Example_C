#include<iostream>
#include<ctime>
#include<algorithm>
#include<cstring>
#include<cstdio>
using namespace std;

//ifstream fi ("SCHOOLS.INP");
//ofstream fo ("SCHOOLS.OUT");
string s,sc,ns="0123456789",a[1001],b[1001];
int n,i1,i2,m;
int main()
{
	//freopen("SCHOOLS.INP","r",stdin);
	//freopen("SCHOOLS.OUT","r",stdout);
	clock_t aa=clock();
	cin>>n;
	//fflush(stdin);
	//fi>>n;
	getline(cin,s);
	for(int i=0;i<n;i++)
	{
		getline(cin,s);
		i1=s.find_first_of(ns);
		i2=s.find_last_of(ns);
		a[i].assign(s,i1,i2-i1+1);
	}
	sort(a,a+n);
	a[n]="***";
	i1=1;
	s=a[0];
	m=0;
	for(int i=0;i<n;i++)
		if(a[i]==a[i+1])	i1++;
	else
	{
		if(i1<5)
		{
			b[m++]=a[i];
		}
		i1=1;
	}
	cout<<m<<"\n";
	//fo<<m<<"\n";
	for(int i=0;i<m;i++)
	//fo<<b[i]<<"\n";
	cout<<b[i]<<"\n";
	clock_t bb=clock();
	cout<<"\nTime:"<<(double)(bb-aa)/1000<<" sec";
}
/*
9
Physics and Mathematics School 18
9ya shkola imeni Pushkina
Lyceum 9
PaMS 18
Gymnasium 42
School 9
Shkola nomer 9
High school 9
School N 9
*/
