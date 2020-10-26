#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int k,j,sum;
    while(cin>>s && s!="0")
    {
        sum=0;
      k=s.size();
      j=k;
      for(int i=0; i<k; i++)
      {
          sum+=(s[i]-'0')*(pow(2,j)-1);
          j--;
      }
      cout<<sum<<endl;

    }
    return 0;
}
