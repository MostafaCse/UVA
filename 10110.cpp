#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned int n,x;
    while(cin>>n)
    {
        if(n==0)
            break;
        x=sqrt(n);
        if(n==x*x) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}
