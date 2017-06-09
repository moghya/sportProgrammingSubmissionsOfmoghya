#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin>>n;
    vector<long long int> v(n);
    long long int i,k,j,ans=0;
    for(i=0;i<n;i++)
        cin>>v[i];
    
    sort(v.begin(),v.end());
    for(i=0,k=1;i<n;i++,k++)
    {
        ans+=abs(v[i]-k);
    }
    cout<<ans;
    return 0;
}