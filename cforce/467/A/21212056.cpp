#include <bits/stdc++.h>
using namespace std;
#define li long long int
#define pb push_back
int main()
{
	li n,a,i,b,ans=0;
	cin>>n;
	for(i=0;i<n;i++)
	{	cin>>a>>b;
		if(b-a>=2)
			ans++;
	}
	cout<<ans;
	return 0;
}