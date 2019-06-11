//https://www.codechef.com/viewsolution/24188642
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef  vector<int> vi ;
typedef  vector<string> vs ;
typedef  vector<long long> vl ;
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define rep(i,n) FOR(i,0,n)
vl arr;
int main()
{
    int pre = 1000001;
    ll ans = 1,preans=1;
    for(int i = 0; i < pre; i++)
    {
        if(i==0)
        {
            arr.push_back(1);
            ans++;
        }
        else
        {

            arr.push_back(((arr[i-1]*ans)+ arr[i-1]+ans)%1000000007);
            ans++;
        }
    }
    int t;
    cin>>t;
    rep(i,t)
    {
        int n;
        cin>>n;
        cout<<arr[n-1]<<endl;
    }
    return 0;
}


