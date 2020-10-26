#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[201];
    int sum[201]={0},len=0;
    while(gets(s))
    {
       if (strcmp(s,"0")==0) break;
       len=strlen(s);
       for(int i=0, j=len-1; i<len; i++,j--)
         sum[i]+=s[j]-'0';
    }

    for(int i=0; i<200; i++)
    {
        if(sum[i]>=10)
        {
            sum[i+1]+=sum[i]/10;
            sum[i]%=10;
        }
    }
int    i=200;
    while(sum[i]==0 && i>=0) i--;
    if(i==-1)
        cout<<"0";
    for(; i>=0; i--)
        cout<<sum[i];
    cout<<endl;

    return 0;
}
