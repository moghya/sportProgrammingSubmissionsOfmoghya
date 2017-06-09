#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	long int n,k,i,tot=0;
	
	cin>>n>>k;
	long int a[n];
	for ( i = 0; i < n; ++i)
		cin>>a[i];

	for(i=1;i<n;i++)
	{
		if(a[i-1]+a[i]<k)
		{
			tot+=k-(a[i-1]+a[i]);
			a[i]+=k-(a[i-1]+a[i]);

		}
	}
		cout<<tot<<"\n";
		for (long int i = 0; i < n; ++i)
		{
			cout<<a[i]<<" ";
			/* code */
		}
	return 0;
}