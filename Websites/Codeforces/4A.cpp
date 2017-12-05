#include <iostream>

using namespace std;

int main()
{   int s;
    int t;
    cin>>s;
    t=s;
    s%=2;
    if(t==2)
    {
     cout <<"NO" << endl;
    }
    else if(s==1)
    {
     cout<< "NO" << endl;
    }
    else
    {
     cout<< "YES"<<endl;
    }
    return 0;
}