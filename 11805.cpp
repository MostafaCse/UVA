#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test_case,n,k,p;
    cin>>test_case;
    for(int i=1; i<=test_case; i++)
    {
        cin>>n>>k>>p;
        int d=(k+p)%n;
        if(d==0)
            cout<<"Case "<<i<<": "<<n<<endl;
        else
            cout<<"Case "<<i<<": "<<d<<endl;
    }
    return 0;
}
