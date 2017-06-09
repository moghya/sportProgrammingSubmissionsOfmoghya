#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long int a,b,i,j,l,m,ans=0;

	cin>>i>>j;
	a=min(i,j);
	b=max(i,j);
	
	
	while(a>=1&&b>=1)
	{

		if(a==1&&b==1)
		break;		
		else
		{	ans++;
			
			if(a<max(a,b))
			{
				a+=1;		
				b-=2;
			}
			else
			{
				b+=1;
				a-=2;
			}
		}
	}
	
	cout<<ans;

	
	return 0;
}


