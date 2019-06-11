//https://codeforces.com/contest/1174/submission/55038999 PROBLEM B
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,c= 0,r=0;
  cin>>n;
  vector<int> v1;
  for(int i = 0; i < n; i++)
  {
    int p;
    cin>>p;
    v1.push_back(p);
    if(p%2 == 0)
    {
      c++;
    }
    if(p%2==1)
    r++;
  }
  if(r!=n && c!=n)
  sort(v1.begin(),v1.end());
  for(int i = 0; i < n; i++)
  {
    cout<<v1[i]<<endl;
  }

	return 0;
}
