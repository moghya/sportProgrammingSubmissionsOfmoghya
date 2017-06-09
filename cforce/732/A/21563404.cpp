#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	long int a,i,ans=10,b;
	cin>>a>>b;
	for(i=1;i<10;i++)
	{
		if((i*a)%10==b||(i*a)%10==0)
		{	ans = i;
			break;
		}
	}

	cout<<ans;

	return 0;
}