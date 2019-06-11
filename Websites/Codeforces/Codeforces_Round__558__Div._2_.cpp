//https://codeforces.com/contest/1163/submission/53917341			Code forces div 2 6 points	
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
    int n,m;
    cin>>n>>m;
    vi lol;
    rep(i,n)
    {
        lol.push_back(i+1);
    }
    int ans = 0,i=0;
    bool r = false;
     if(m==0)
     {
         ans=1;
         cout<<ans<<endl;
         return 0;
     }
    while(m>0)
    {

        if(i%2==0 &&r && lol[i]!=0)
        {
           // cout<<m<<" "<<i<<lol[i]<<endl;
                  lol[i]=0;
                  m--;
        }
        else if(i%2==1 && lol[i]!=0)
        {

            lol[i]=0;
            m--;
        }
        if(i==n-1)
        {
            i=-1;
            r=true;
        }
        i++;
      // cout<<i<<endl;
    }
    int counter = 0;
    rep(i,n)
    {
         // cout<<lol[i]<<endl;
          if(counter == 0 && lol[i]!=0)
          {

              ans++;
              counter++;
          }
          if(lol[i]==0)
          {
              counter = 0;
          }

    }

    if(lol[0]!=0 && lol[n-1]!=0)
    {
              ans--;
    }
 cout<<ans<<endl;
    return 0;
}
