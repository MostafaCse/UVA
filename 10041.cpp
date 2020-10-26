#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,r;
    cin>>t;
    while(t--)
    {
        cin>>r;
        int s[r],mid=0,value=0;
        for(int i=0; i<r; i++)
            cin>>s[i];
            sort(s,s+r);
            mid=s[r/2];
            for(int i=0; i<r; i++)  value+=abs(mid-s[i]);
        cout<<value<<endl;
    }
    return 0;
}
