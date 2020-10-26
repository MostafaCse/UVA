#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j;
    while(scanf("%d%d",&i,&j)==2)
    {
        int k=i,in=0;
      while(k>=j)
      {
          k=k-j+1;
          in++;
      }
        cout<<i+in<<endl;
    }

    return 0;
}
