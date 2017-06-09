#include <bits/stdc++.h>
#define li long long int
#define mod 1000000007
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

        li n,k;
        cin>>n>>k;
        vector<li> a(n),b(k);
        for(li i=0;i<n;i++)cin>>a[i];
        for(li i=0;i<k;i++)cin>>b[i];
        sort(b.rbegin(),b.rend());
        li j=0;
        string ans="Yes";
        for(li i=0;i<n;i++){
            if(a[i]==0){
                if(j<k){
                    a[i]=b[j];
                    j++;
                }
                else{
                    ans="No"; break;
                }
            }
        }
        if(ans=="Yes"&&is_sorted(a.begin(),a.end()))ans="No";
        cout<<ans;
    return 0;
}
