#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
   int n;
   cin>>n;
   vector<int> ps;
   for(int i=0; i<n; i++)
   {
       int l;
       cin>>l;
     ps.push_back(l);
   }


   vector<int>::iterator it;
   it = unique (ps.begin(), ps.end());
   ps.resize(distance(ps.begin(),it));
 int Sposition=0,stemp=0;
  int Bposition=0,ftemp=0;
   for(int i=0; i<ps.size(); i++)
   {
        if(i==0)
      {
         stemp=ps[i];
         ftemp=i;
      }
      else
      {
        if(ps[i]<stemp) {

        }
        stemp=ps[i];
        Sposition=i; if(ps[i]>ftemp)
      {
         ftemp=ps[i];
         Bposition=i;
      }
      }

   }{

      }


cout<<Bposition+((ps.size()-1)-Sposition)<<endl;

    return 0;
}
