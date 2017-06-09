#include <iostream>
using namespace std;

int main()
{
    string s,h="hello",ans="NO";
    cin>>s;
    long int l=s.length(),i,j=0;
    for(i=0;i<l;i++)
    {
        if(s[i]==h[j])
            j++;
            
        if(j==5) { ans="YES"; break;}
    }
    cout<<ans;
    
    return 0;
}
