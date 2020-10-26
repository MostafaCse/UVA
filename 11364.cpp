#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int sum=0;
        int n;
        cin>>n;
        int f[n];
        for(int i=0; i<n; i++) cin>>f[i];
        sort(f,f+n);
        int med=n/2;
    for(int i=0; i<n; i++)
    {
        sum+=abs(f[med]-f[i]);
    }
    cout<<sum<<endl;
    }
}
