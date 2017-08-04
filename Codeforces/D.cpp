#include <bits/stdc++.h>
using namespace std;
char r[1000][1000];
int main()
{
    int x1,x2,y1,y2,z1,z2;
    cin>>x1>>x2>>y1>>y2>>z1>>z2;
    int d = x1*x2 + y1*y2 + z1*z2;
    int e = sqrt(d);
    int flag = 0;
    if (e*e==d)
    {
        if (x1>e || x2>e || y1>e || y2>e || z1>e || z2>e)
        {
            flag=1;
        }
    }

    if (flag==0)
    {
        int row,col;
        if (x1 == e || x2 == e)
        {
            for (row=1;row<=min(x1,x2);row++)
                for (col=1;col<=e;col++)
                    r[row][col]='A';
            col = 1;
            int t = row;
            //cout<<t;
            for (row;row<=(min(x1,x2)+min(y1,y2));row++)
                for(col=1;col<=max(y1,y2);col++)
                    r[row][col]='B';
            int t1=col;

            if (row==e+1)
            {
                for(row=t;row<=e;row++,col=t1)
                    for(col;col<=e;col++)
                        r[row][col]='C';
            }
            else
            {
                col=1;
                row++;
                for(;row<=e;row++)
                    for(;col<=e;col++)
                        r[row][col]='C';
            }
        }
        else if (y1==e || y2==e)
        {
            for (row=1;row<=min(y1,y2);row++)
                for (col=1;col<=e;col++)
                    r[row][col]='B';
            col = 1;
            int t = row;
            //cout<<t;
            for (row;row<=(min(x1,x2)+min(y1,y2));row++)
                for(col=1;col<=max(x1,x2);col++)
                    r[row][col]='A';
            int t1=col;

            if (row==e+1)
            {
                for(row=t;row<=e;row++,col=t1)
                    for(col;col<=e;col++)
                        r[row][col]='C';
            }
            else
            {
                col=1;
                row++;
                for(;row<=e;row++)
                    for(;col<=e;col++)
                        r[row][col]='C';
            }
        }
        else
        {
            for (row=1;row<=min(z1,z2);row++)
                for (col=1;col<=e;col++)
                    r[row][col]='C';
            col = 1;
            int t = row;
            //cout<<t;
            for (row;row<=(min(z1,z2)+min(y1,y2));row++)
                for(col=1;col<=max(y1,y2);col++)
                    r[row][col]='B';
            int t1=col;

            if (row==e+1)
            {
                for(row=t;row<=e;row++,col=t1)
                    for(col;col<=e;col++)
                        r[row][col]='A';
            }
            else
            {
                col=1;
                row++;
                for(;row<=e;row++)
                    for(;col<=e;col++)
                        r[row][col]='C';
            }

        }
        for (int i=1;i<=e;i++)
        {
            for (int j=1;j<=e;j++)
                cout<<r[i][j]<<' ';
            cout<<endl;
        }
    }
    else
    {
        cout<<"-1";
    }
}
/*
5 5
AAAAA
BBCCC
BBCCC
BBCCC
BBCCC
*/
