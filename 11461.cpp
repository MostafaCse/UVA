#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    while(cin>>a>>b && a!=0 && b!=0)
    {
        int ans=0,c=0;
       for(int i=a; i<=b; i++)
       {
           c=sqrt(i);
           if(c*c==i)
            ans++;
       }
       cout<<ans<<endl;
    }
    return 0;
}
