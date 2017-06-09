#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    unsigned long long int n=0,x=0,y=0,dist=0,i=0;
    char c;
    cin>>n>>x;
    for(i=0;i<n;i++)
    {
        cin>>c>>y;
        if(c=='-')
        {
            if(y<=x)
                x-=y;
            else
                dist++;
        }
        else
        {
            x+=y;
        }
            
    }
    cout<<x<<" "<<dist;
  return 0;
}
