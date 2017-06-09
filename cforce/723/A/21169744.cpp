#include <bits/stdc++.h>
using namespace std;
#define li long int
int main()
{
	li a,b,c,ans;
	cin>>a>>b>>c;
	ans = min(abs(a-b)+abs(b-c),min(abs(a-c)+abs(b-a),abs(a-c)+abs(b-c)));
	cout<<ans;
	return 0;
}