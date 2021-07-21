#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    getline (cin, str);
     for(int i=0;i<str.size();i++)
     {
         str[i]=tolower(str[i]);
     }
    
    for(int i=0;i<str.size();i++)
    {
        if(!isalpha(str[i]) && str[i]!=' ')
        {
            str.erase(str.begin()+i);
        }
        if(str[i]==' ' )
        {
            str[i+1]=toupper(str[i+1]);
            str[i-1]=toupper(str[i-1]);
        }
        
    }
    str[0]=toupper(str[0]);
    str[str.size()-1]=toupper(str[str.size()-1]);
    cout<<str<<endl;
    return 0;
}
