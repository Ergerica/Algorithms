//https://codeforces.com/contest/1174/submission/55033856
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
  cin>>n;
  vector<int> v1,v2;
  for(int i = 0; i < n; i++)
  {
    int p;
    cin>>p;
    v1.push_back(p);
  }
   for(int i = 0; i < n; i++)
  {
    int p;
    cin>>p;
    v2.push_back(p);
  }
  int t = 0;
  for(int i = 0; i < n; i++)
  {
    int sum1 = 0,sum2 = 0;
    for(int j = 0; j < n; j++)
    {
      if(i==0 && t==0)
      {
         sum1+=v1[j];
         sum2+=v2[j];
      }
      else if(sum1==sum2)
      {
       // cout<<v1[i]<<" "<<v2[j];
        if(v1[i]!= v2[j])
        {
          
          int c = v1[i];
          v1[i] = v2[j];
          v2[j] = c;
          sum1= sum1-v1[i]+v2[j];
          sum2=sum2-v2[j]+v1[i];
          
          break;
        }
      }
    }
  //  cout<<sum1<<" "<<sum
    if(i==1 && t==0)
    {
      i=0;
      t=5;
    }
    if(sum1!=sum2)
    {
      break;
    }
    if(i==n-1)
    {
      cout<<-1;
      return 0;
    }
  }
  for(int i = 0; i < n; i++)
  {
    cout<<v1[i]<<" ";
  }
   for(int i = 0; i < n; i++)
  {
    cout<<v2[i]<<" ";
  }
	return 0;
}
