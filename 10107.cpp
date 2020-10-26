#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=1,a[10001];

    while((scanf("%d",&a[n]))==1)
    {
      sort(a,a+n+1);
      if(n==1)
        cout<<a[1]<<endl;
      else if(n%2==0)
        cout<<((a[n/2]+a[(n/2)+1])/2);
      else if(n%2!=0)
        cout<<a[(n/2)+1]<<endl;
      n++;
    }
    return 0;
}
