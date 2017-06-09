#include <bits/stdc++.h>
using namespace std;
#define li long int
#define pb push_back

int main()
{
	string s;
	li l;
	cin>>l;
	cin>>s;
	vector<li> v;
	li i,len=0;
	for(i=0;i<l;i++)
	{	
		if(s[i]=='B')
			len++;
		
		if((s[i]=='W'&&len>0) || (i==l-1)&&len>0 )
		{
			v.pb(len);
			len=0;
		}
	}

		cout<<v.size()<<"\n";
		for(i=0;i<v.size();i++)
			cout<<v[i]<<" ";
	
	return 0;
}