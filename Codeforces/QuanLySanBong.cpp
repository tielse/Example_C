#include<fstream>
using namespace std;
ifstream fi("stadium.inp");
ofstream fo("stadium.out");
int64_t n,res,t,d=1000000007;
/*Giai thuat Ai Cap*/
int main()
{
	fi>>n;	//n=3
	n--;
	t=2;	res=1;	//n=2
	while(n>0)	//2>0
	{
		if(n&1)	//2&1
		res=(res*t)%d;	//res=2%1000000007	du 2
		t=(t*t)%d;	//=4%1000000007 du 4
		n>>=1;	//dich ve sang phai 1 bit
	}
	fo<<res;	
}
