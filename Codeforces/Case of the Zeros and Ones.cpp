#include<iostream>

using namespace std;

int main()
{
    int n,dem_i=0,dem_j=0;
    char c;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>c;
        if(c=='1')
            dem_i++;
        else
            dem_j++;
    }
    cout<<n-2*min(dem_i,dem_j);
    return 0;
}
