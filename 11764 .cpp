#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,h,j,pre,cur,n;
    cin>>t;
   for(int k=1; k<=t; k++)
    {
       cin>>n>>pre;
       h=j=0;
       for(int i=0; i<n-1; i++)
       {
           cin>>cur;
           if(cur>pre) h++;
           if(cur<pre) j++;
           pre=cur;
       }


      cout<<"Case "<<k<<": "<<h<<" "<<j<<endl;
    }
    return 0;
}
