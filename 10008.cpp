#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,len;
    vector<char>a;
    string s;
    while(cin>>t)
    {
        for(int i=0; i<t; i++)
        {
            getline(cin,s);
            len=s.size();
            for(int j=0; j<len; j++)
                a.push_back(s[j]);
        }
        int l=0;
        while(!a.empty())
        {
           cout<<a[l];
           l++;
        }

    }
    return 0;
}
