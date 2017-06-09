#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n,a,b,c,d;
	cin>>n;
	c=0; d=0;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b;
		d-=a; d+=b;
		if(d>c) c=d; 
	}
	cout<<c;
	return 0;
}