#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,b,ans;
    string s;
    cin>>n>>a>>b;
    a--; b--;
    cin>>s;
    int i,j,k;
    k = s[b]-48;
    j = s[a]-48;
    ans = 0;
    if(k!=j&&a!=b)
    {
        ans=1;
    }
    
    cout<<ans;
    return 0;
}