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
	int p,q,r;
  cin>>p>>q>>r;
  vi lol;
  lol.push_back(p);
  lol.push_back(q);
  lol.push_back(r);
  sort(lol.begin(),lol.end());
  cout<<lol[0]+lol[1]<<endl;
	return 0;
}

