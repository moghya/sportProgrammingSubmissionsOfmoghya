#include <bits/stdc++.h>

using namespace std;
int main(int argc, char const *argv[])
{
  
  long int n,m,i;
  cin>>n;
  m=n;
  if(n==1 | n==2) {cout<<"-1"; return 0;}
  for(i=0;i<n;i++)
    cout<<m--<<" ";


  //st(a,n);

  return 0;
}