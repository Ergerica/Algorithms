#include <iostream>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--)
  {
     long long n;
    cin>>n;
    int p = n;
    int ans = 0;
    while(n!=0)
    {
      ans+=n%10;
      n/=10;
      //cout<<ans<<endl;
    }

    //cout<<ans<<10-(ans%10)<<endl;
    int aan = ans,c=0;
    while(ans!=0)
    {
      
       c+=ans%10;
       ans/=10;

    }
    if(c%10!=0)
    {
      cout<<aan<<10-(c%10)<<endl;
    }
    else
      cout<<aan<<0<<endl;
    
  }
 
 
	return 0;
}
