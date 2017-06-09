#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<int> v(n+1);
    for(int i=1;i<=n;i++)cin>>v[i];
    for(int i=0;i<m;i++){
        int l,r,x;
        cin>>l>>r>>x;
        int cnt=0;
        for(int j=l;j<=r;j++){
            if(v[j]<v[x])cnt++;
        }
        if(cnt+l!=x)cout<<"No\n";else cout<<"Yes\n";
    }
}