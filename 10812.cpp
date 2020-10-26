#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,s,d,x,y;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>s>>d;
        if(s>=d && (s+d)%2==0)
        {
           x=(s+d)/2;
           y=(s-d)/2 ;
           cout<<x<<" "<<y<<endl;
        }
        else
            cout<<"impossible"<<endl;
    }
    return 0;
}
