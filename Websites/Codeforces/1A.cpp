#include <iostream>

using namespace std;

int main()
{
 long long int n;
long long int m;
long long int a;
  cin>>n;
  cin>>m;
  cin>>a;
  long long int square_height;
  long long int square_width;
  if(n%a==0)
  {
   square_height = n/a;
  }
  else
  {
  square_height= (n/a)+1;
  }
  if(m%a==0)
  {
  square_width = m/a;
  }
  else
  {
  square_width= (m/a)+1;
  }
  cout<<square_width*square_height<<endl;
  return 0;
}
