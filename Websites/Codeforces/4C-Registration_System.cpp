#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    map<string,int> hope;
    for(int i=0; i<n; i++)
    {
        string str;
        cin>>str;
        if(hope.count(str)>0)
        {
            cout<<str<<hope[str]<<endl;
            hope[str]++;

        }
        else
       {
           hope[str]=1;
           cout<<"OK"<<endl;
       }


    }

}
