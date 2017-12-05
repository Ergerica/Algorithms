#include <iostream>
#include <cstdlib>
#include <climits>
using namespace std;

int main()
{
    int x1,x2,x3;
    cin>>x1>>x2>>x3;
    int one=(abs(x1-x2))+(abs(x3-x2));
    int two=(abs(x1-x3))+(abs(x2-x3));
    int three=(abs(x2-x1))+(abs(x3-x1));

     if(two < one && two<three )
    {
        cout<<two<<endl;
    }
     else if(three < two && three<one )
    {
        cout<<three<<endl;
    }


    else if(one < two && one<three )
    {
        cout<<one<<endl;
    }





    return 0;
}
