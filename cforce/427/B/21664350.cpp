#include<bits/stdc++.h>

using namespace std;

long long C(int n, int r) 
{
    if(r > n / 2) r = n - r; // because C(n, r) == C(n, n - r)
    long long ans = 1;
    long int i;

    for(i = 1; i <= r; i++) {
        ans *= n - r + i;
        ans /= i;
    }

    return ans;
}
int main()
{
    long long int n,t,c,cnt,ans,x;
    cin>>n>>t>>c;
    vector<long long int> v(n);
    long long int i,j,k,l;
    for(i=0;i<n;i++) cin>>v[i];
    
    cnt = 0; ans=0;
    for(i=0;i<n;i++)
    {
        if(v[i]>t)
        {
        	x = cnt-(c-1);
        	if(x>0)
        		ans+=x;
        	cnt=0;            
        }
        else
            cnt++;
        
    }
   	x=cnt-(c-1);
    if(x>0)
    	ans+=x;
    cout<<ans;
}