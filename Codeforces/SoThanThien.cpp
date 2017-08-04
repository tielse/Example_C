#include<iostream> 
#include<conio.h> 
#include<string.h> 
#include<stdlib.h> 
#include<iostream>

using namespace std; 
int dao(int a)
{ 
	char *s; 
	s = new char[100] ; 
	itoa(a,s,10); 
	s =strrev(s); 
	return atoi(s); 
} 
int ucln(int a ,int b)
{ 
	int u; 
	if(a ==b) return a; 
	if(a>b) u =b; else u =a; 
	while((a%u !=0)||(b%u !=0)) u = u-1; 
	return u; 
} 
int main(){ 
	int a, b ,k=0; 
	cin >> a >> b; 
	while((a>b)||(a<10)||(b>30000))
	{ 
		cout << "Nhap lai a,b : "; 
		cin >> a >> b; 
	} 
	for(int i = a;i<=b ;i++)
	{ 
		if(ucln(i,dao(i)) ==1) k++ ; 
	} 
	cout << k ; 
	return 0; 
}//end main
