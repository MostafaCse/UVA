#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"PERFECTION OUTPUT"<<endl;
    while(cin>>n && n!=0)
    {

        int tem=n,sum=0;
        for(int i=1; i<n/2; i++){
            if(tem%i==0)
                sum+=i;
        }
    if(sum==n)
        cout<<n<<" PERFECT"<<endl;
     if (sum>n)
        cout<<n<<" ABUNDANT"<<endl;
   if(sum<n)
        cout<<n<<" DEFICIENT"<<endl;
    }
cout<<"END OF OUTPUT"<<endl;
return 0;
}
