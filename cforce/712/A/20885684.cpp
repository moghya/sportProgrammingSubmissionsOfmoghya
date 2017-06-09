#include <iostream>

using namespace std;

int main()
{
	long int n,i,j,k;
	cin>>n;
	long int a[n+1]={0};
	long int b[n+1]={0};

	for(i=1;i<n+1;i++)
		cin>>a[i];

	b[n]=a[n];

	for(i=n-1;i>0;i--)
	{
		b[i]=a[i]+b[i+1]+(-1)*(b[i+1]-a[i+1]);
	}
	
	for(i=1;i<n+1;i++)
		cout<<b[i]<<" ";

	return 0;
}