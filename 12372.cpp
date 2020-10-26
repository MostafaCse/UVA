#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,h,w,l;

    cin>>t;
    for(int i=1; i<=t; i++)
    {
        cin>>l>>w>>h;
        cout<<"Case "<<i<<": ";
        if(l<=20 && w<=20 && h<=20) cout<<"good"<<endl;
        else cout<<"bad"<<endl;
    }
    return 0;
}
