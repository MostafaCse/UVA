#include<bits/stdc++.h>
#define M 7489
using namespace std;

int main()
{
    int ways[M];
    for(int i=0; i<M; i++)
        ways[i]=0;
        ways[0]=1;
   for(int i=1; i<=M; i++) ways[i]+=ways[i-1];
      for(int i=5; i<=M; i++) ways[i]+=ways[i-5];
    for(int i=10; i<=M; i++) ways[i]+=ways[i-10];
  for(int i=25; i<=M; i++) ways[i]+=ways[i-25];
    for(int i=50; i<=M; i++)ways[i]+=ways[i-50];
    int n;
    while(cin>>n)
    {
        cout<<ways[n]<<endl;
    }
    return 0;
}
