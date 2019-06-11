//https://www.hackerearth.com/submission/25989341/			Hacker earth extra points //1 point		
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
    rep(i,t)
    {
        int n,ans = 0;
        cin>>n;
        for(int i = 1; i <= n; i++)
        {
            if(i%2 == 0 && i%4!=0)
                ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
