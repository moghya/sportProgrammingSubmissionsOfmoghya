#include <bits/stdc++.h>
using namespace std;
#define li long int
int main()
{
	li k,n,m,l,i,ans,d;
	cin>>k;
	cin>>l;
	cin>>m;
	cin>>n;
	cin>>d;
	ans=0;
	for(i=1;i<d+1;i++)
		if(i%k==0||i%l==0||i%m==0||i%n==0)
			ans++;
	cout<<ans;
	
	return 0;
}