#include <iostream>
#include <bits/stdc++.h>
#include<map>
using namespace std;

int
main ()
{
  int n,comp[100];
  map < int, int >m;
  map<int,string> ac {{1,"AAA"},{2,"BBB"},{3,"CCC"}};
  cout << "How many voters can caste their vote? ";
  cin >> n;
  for (int i = 0; i < n; i++)
    {
      int a;
      cout << "Press 1 to vote for AAA, 2 for BBB, 3.for CCC, 4 for Nota: ";
      cin>>a;
      m[a] += 1;
    }
    std::pair<int, int> app
        = make_pair(0, 0);
    // map<int, int>::iterator b;
    for (auto x:m) {
             if (x.second
            > app.second) {
  
            app
                = make_pair(
                    x.first,
                    x.second);
        }
    }
std::cout<<ac[app.first]<<" wins the vote"<<endl;
  return 0;
}
