#include <bits/stdc++.h>

using namespace std;

int main()
{
	
	long int n;
	string s,ans="NO";
	long int b,a;
	cin>>n;
	while(n--)
	{
		cin>>s>>b>>a;
		if(b>=2400 && a-b>0)
		{
			ans="YES";
			break;
		}
	}
	cout<<ans;
	return 0;
}