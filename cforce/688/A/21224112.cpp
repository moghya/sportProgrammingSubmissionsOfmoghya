#include <bits/stdc++.h>
using namespace std;
#define li long long int
#define pb push_back
int main()
{
	li n,a,i,b,cnt=0,d;
	cin>>n>>d;
	string s;
	li max=0;
	for(i=0;i<d;i++)
	{	cin>>s;
		bitset<256> b(s);
		if(b.count() < n)
			cnt++;
		else
			cnt = 0;

		if(max<cnt) max =cnt;

	}

	cout<<max;
	return 0;
}