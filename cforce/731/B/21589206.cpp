#include <bits/stdc++.h>

using namespace std;

int main()
{
	
	long int i,n;
	cin>>n;
	vector<long int> v(n);
	long int sum=0;
	for ( i = 0; i < n; ++i)
	{
		cin>>v[i];
		sum+=v[i];
	}
	if(sum%2!=0) { cout<<"NO"; return 0;}
	else
	{
		string ans="YES";
		sum=0;
		for ( i = 0; i < n; ++i)
		{
			if(v[i]==0)
			{	if(sum%2!=0)
				{
					ans = "NO"; break;
				}
				else
					sum = 0;
			}
			else
				sum+=v[i];
		}
		cout<<ans;
	}
	return 0;
}