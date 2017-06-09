#include<bits/stdc++.h>
#define li long long int
using namespace std;

int main()
{
    string s;
    li n,i,j,x,k,l,t,cnt=0;
    cin>>n>>x;
    map<li,li> count;
    vector<li> v(n);
    for(i=0;i<n;i++)
    {
        cin>>v[i];
        t = x^v[i];
        cnt+=count[t];
        
        count[v[i]]++;    
    }
    cout<<cnt;
    
    return 0;
}