#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef  vector<int> vi ;
typedef  vector<string> vs ;
typedef  vector<long long> vl ;
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define rep(i,n) FOR(i,0,n)
ll freq[10000000] = {0};
int main() {

  int n;
  cin>>n;
  vi lol;
  rep(i,n)
  {
    int p;
    cin>>p;
    lol.push_back(p);
  }
  int cans = 0,minn=1000000;
  rep(i,n)
  {
    cans+=lol[i];
    int ban=0;
    for(int j = i+1; j < n; j++)
    {
      ban+=lol[j];
    }
   // cout<<cans<<" "<<ban<<endl;
    minn = min(minn,abs(cans-ban));
  }
  cout<<minn<<endl;
	return 0;
}

