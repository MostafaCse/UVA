#include<bits/stdc++.h>
using namespace std;

int f91(int n)
{
    if(n>=101)
        return n-10;
    else
        return f91(f91(n+11));
}
int main()
{
    unsigned int n,k;
    while(1)
    {
       cin>>n;
       if(n==0)
            break;
      k=f91(n);

        cout<<"f91("<<n<<") = "<<k<<endl;
    }
    return 0;
}
