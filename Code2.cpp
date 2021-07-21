#include <iostream>
#include <bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
 int n;
     int m,d,j;
     vector<int> a;
     cout<<"Input range"<<endl;
     cin>>m;
     cout<<"Enter the numbers:";
     for(j=0;j<m;j++)
     {
         cin>>d;
         a.push_back(d);
     }
     sort(a.begin(),a.end());
     cout<<"The Order is: ";
     for (auto x : a)
        cout << x << ",";
 return 0;
}
