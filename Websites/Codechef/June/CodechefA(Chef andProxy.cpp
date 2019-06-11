
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

  int t;
  cin>>t;
  rep(i,t)
  {
    int d;
    cin>>d;
    string p;
    cin>>p;
    int counter=(ceil((double)(d*75)/100)),cou=0;
   // cout<<counter<<endl;
    rep(j,p.size())
    {
      if(p[j]=='P')
      counter--;
    }
    //cout<<counter<<endl;
    int ans = counter;
    rep(j,p.size())
    {
      
      if(j!=0 && j!=1 && j!=(p.size()-1) && j!=(p.size()-2))
      {
        //cout<<j<<endl;
        if((p[j-1]== 'P'|| p[j-2]=='P') &&( p[j+1]=='P'||p[j+2]=='P') && p[j]=='A')
        {
          counter--;
       
        }  
      } 
      if(counter==0)
      {
        cout<<ans<<endl;
        cou=5;
        break;
      }
       if(counter<0)
      {
        cout<<0<<endl;
        cou=5;
        break;
      }
      

    }
     if(cou==0)
      cout<<-1<<endl;
   
  }
	return 0;
}
