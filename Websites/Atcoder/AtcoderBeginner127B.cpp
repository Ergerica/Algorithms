//https://atcoder.jp/contests/abc127/submissions/5590112			At coder beginner B 4 points	
#include <iostream>
using namespace std;

int main() {
  int r, D,x2k;
  cin>>r>>D>>x2k;
  for(int i = 0; i < 10; i++)
  {
    cout<<(r*x2k)-D<<endl;
    x2k = (r*x2k)-D;
  }
	return 0;
}

