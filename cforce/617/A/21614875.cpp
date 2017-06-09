#include<bits/stdc++.h>

using namespace std;

int main()
{
    long int cnt=0,n;
    cin>>n;
    if(n>=5)
    {
        cnt+=n/5;
        n=n%5;
    }
        if(n>=4)
    {
        cnt+=n/4;
        n=n%4;
    }
        if(n>=3)
    {
        cnt+=n/3;
        n=n%3;
    }
        if(n>=2)
    {
        cnt+=n/2;
        n=n%2;
    }
        if(n>=1)
    {
        cnt+=n/1;
        n=n%1;
    }
    cout<<cnt;
}