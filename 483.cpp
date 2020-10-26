#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    while(getline(cin,s))
    {
      int l,b=-1;
      l=s.size();
    for(int i=0; i<l; i++)
    {
       if(s[i]==' ')
       {
           for(int k=i-1; k>b; k--)
            cout<<s[k];
        cout<<" ";
        b=i;
       }
    }
    for(int j=l-1; j>b; j--) cout<<s[j];
    cout<<endl;
    }
    return 0;
}
