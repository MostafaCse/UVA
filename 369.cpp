#include<bits/stdc++.h>
using namespace std;
int a[101][101];
int main()
{
    a[1][1]=1;
    a[1][0]=1;

    for(int i=2; i<=100; i++)
    {
        a[i][0]=1;
        for(int j=1; j<=i; j++)
            a[i][j]=a[i-1][j]+a[i-1][j-1];
    }
    int n,m;
    while(cin>>n>>m && n!=0 || m!=0)
    {
        cout<<n<<" things taken "<<m<<" at a time is "<<a[n][m]<<" exactly."<<endl;
    }
}
