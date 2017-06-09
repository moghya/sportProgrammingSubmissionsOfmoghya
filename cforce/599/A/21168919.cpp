#include <bits/stdc++.h>
using namespace std;
#define li long int
int main()
{
	li a,b,c,ans;
	cin>>a>>b>>c;
	ans = min(2*a+2*b,min(a+b+c,min(2*a+2*c,2*b+2*c)));
	cout<<ans;
	return 0;
}