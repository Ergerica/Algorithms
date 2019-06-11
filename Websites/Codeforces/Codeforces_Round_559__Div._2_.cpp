
//https://codeforces.com/contest/1159/submission/54032104			Code forces div 2 6 points	
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef  vector<int> vi ;
typedef  vector<string> vs ;
typedef  vector<long long> vl ;
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define rep(i,n) FOR(i,0,n)


int main()
{
    int n,ans=0;
    cin>>n;
    rep(i,n)
    {
        char p;
        cin>>p;
        if(p=='-')
        {
             if(ans>0)
               ans--;
        }
        else
            ans++;

    }
    cout<<ans<<endl;
    return 0;
}
