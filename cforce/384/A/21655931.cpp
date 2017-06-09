#include <bits/stdc++.h>

using namespace std;
int main(int argc, char const *argv[])
{
  long int n,i,j;
  cin>>n;
  long int ans;
  if(n%2==0)
  {
  	ans = n*(n/2);
  }
  else
  {
  	ans = (n/2+1)*(n/2+1)+(n/2)*(n/2);
  }
  cout<<ans<<"\n";
  long int k=2;
  for(i=0;i<n;i++)
  {
  	for(j=0;j<n;j++)
  	{
  		if(k%2==0)
  		{
  			cout<<"C";
  			k=1;
  		}
  		else
  		{
  			cout<<".";
  			k=2;
  		}
  	}
  	if(n%2==0)
	{
		if(k%2==0) k=1; else k=2;
	}
  	cout<<"\n";
  }
  return 0;
}