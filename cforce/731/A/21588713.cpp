#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	char ch='a';int x,i,sum=0,z=0;
	for(i=0;i<s.length();i++)
	{
		x=abs(ch-s[i]);
		z=(min(x,26-x));
		//cout<<min<<" ";
		ch=s[i];
		sum+=z;
	}
	cout<<sum<<endl;
	return 0;
}