//https://atcoder.jp/contests/abc127/submissions/5590112			At coder 127 beginner A 6 points		
#include <iostream>
using namespace std;

int main() {
int a,b;
cin>>a>>b;
if(a>=6 && a<=12)
cout<<b/2;
if(a<6)
cout<<0<<endl;
if(a>12)
cout<<b<<endl;
	return 0;
}

