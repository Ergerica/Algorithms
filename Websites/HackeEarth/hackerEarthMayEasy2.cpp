
//https://www.hackerearth.com/submission/25990669/			Hacker earth extra points  0.16 points		
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef  vector<int> vi ;
typedef  vector<string> vs ;
typedef  vector<long long> vl ;
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define rep(i,n) FOR(i,0,n)
ll minn = 1000000001,n;
bool check(ll key,ll i, ll j)
{
    if((key*abs(i-j)) > minn)
        return true;
    return false;
 
}
 ll binary_search_first_yes( ll lo, ll hi,ll i,ll j ) {
     // Find smallest x such that check(x) is true
     while (lo < hi) {
        ll mid = lo + (hi-lo)/2;
        if ( check(mid,i,j) )
           hi = mid;
        else
           lo = mid+1;
     }
     assert( check(lo,i,j) );   // abort if check(x) is false for all x
     return lo;             // lo is the least x for which check(x) is true
  }
 
int main()
{
    int t;
    cin>>t;
    vl lol;
    lol.push_back(0);
    ll minn = 0;
    rep(i,t)
    {
       int num;
       cin>>num;
       if(num==1)
       {
           ll p;
           cin>>p;
           lol.push_back(p);
           minn = min(p,minn);
       }
       if(num==2)
       {
           int r;
           cin>>r;
           minn = 1000000000001;    
           rep(i,lol.size())
           {
               lol[i] = lol[i]^r;
               minn = min(minn,lol[i]);
           }
       }
       if(num==3)
       {
           cout<<minn<<endl;
       }
    }
    return 0;
}
