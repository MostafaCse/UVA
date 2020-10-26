#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    string s1,s2;
    int n,c;
    while(cin>>s1>>s2)
    {
        n=s1.size();
        c=0;

        for(int i=0; i<s2.size() && n>c; i++)
            if(s2[i]==s1[c]) c++;

        if(c==n) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }

    return 0;
}
