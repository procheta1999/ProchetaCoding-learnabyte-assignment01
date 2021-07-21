#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int
main ()
{
 int cal,a,b;
 cout<<"Press 1 for Sum, 2 for Mul, 3.for Div, 4 for Sub: ";
 cin>>cal;
 cout<<"Enter First number : ";
 cin>>a;
 cout<<"Enter Second Number : ";
 cin>>b;
 switch(cal)
 {
     case 1:
     cout<<"The Sum is :"<<a+b<<endl;
     break;
     case 2:
     cout<<"The Product is :"<<a*b<<endl;
     break;
     case 3:
     cout<<"The Quotient is:"<<(int)a/b<<endl;
     break;
     case 4:
     cout<<"The Difference is:"<<a-b<<endl;
     break;
     default:
     cout<<"Wrong input"<<endl;
     break;
 }
  return 0;
}
