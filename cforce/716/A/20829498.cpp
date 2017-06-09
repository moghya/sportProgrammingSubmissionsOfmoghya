#include <iostream>

using namespace std;

#include<iostream>

using namespace std;

int main()
{

 long int n,t,i,ans=0;
cin>>n>>t;
long int a[n];
for(i=0;i<n;i++)
 cin>>a[i];
for(i=0;i<n-1;i++)
{
 if(a[i+1]-a[i]>t)
  ans=0;
 else
  ans++;
}


cout<<ans+1;

 return 0;

}