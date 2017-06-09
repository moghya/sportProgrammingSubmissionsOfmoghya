#include <bits/stdc++.h>
using namespace std;
#define li long long int
#define pb push_back
int main()
{
	li n,m,k,i,ans=0,x;
	cin>>n>>m>>k;
	li a[m+1];
	for(i=0;i<m+1;i++)
		cin>>a[i];
	
	for(i=0;i<m;i++)
	{
		x = a[m]^a[i];
		bitset<64> b(x);
		//cout<<x<<":"<<b.count()<<" ";
		if(b.count() <= k)
			ans++;
	}
	
	cout<<ans;
	return 0;
}