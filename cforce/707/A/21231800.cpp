#include <bits/stdc++.h>
using namespace std;
#define li long long int
#define pb push_back
int main()
{
	li n,m,i,j;
	cin>>n>>m;
	char c;
	string ans="#Black&White";
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
		{	cin>>c;
			if(c!='W'&&c!='B'&&c!='G')
				ans = "#Color";
		}
	cout<<ans;
	return 0;
}