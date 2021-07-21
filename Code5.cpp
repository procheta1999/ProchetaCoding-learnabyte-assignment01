#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;
void factors(int n)
{
    cout<<"Its factorial are: ";
   for(int j=1;j<=n;j++)
   {
       if(n%j==0)
       {
           cout<<j<<",";
       }
   }
}
int
main ()
{
int n;
int c=0;
cout<<"Insert A Number:";
cin>>n;
for(int i=2;i<n;i++)
{
    if(n%i==0)
    {
        c=1;
        cout<<"It is Not A Prime Number"<<endl;
        factors(n);
        break;
    }
}
if(c==0)
{
    cout<<"It is a Prime Number"<<endl;
}
  return 0;
}
