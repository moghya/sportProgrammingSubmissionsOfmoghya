#include<iostream>

using namespace std;

int main()
{
	long int n,m,i,j,k;
	
	cin>>n>>m;
	
	i=2*n+1; j=1;
	for(k=0;k<m;k++)
	{
		if(k%2==0&&i<=m)
		{
			cout<<i<<" "; i++;
		}
		else
		{
			cout<<j<<" "; j++;
		}
	}

	return 0;
}