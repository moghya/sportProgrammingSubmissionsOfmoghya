#include<iostream>

using namespace std;

int main()
{
    int w,f=0,i;
    cin>>w;
    for(i=2;i<=w-2;i+=2)
    {
        if( (w-i)%2==0 )
        {
            f=1;break;
        }   
    }
    if(f) cout<<"\nYES"; else cout<<"\nNO";
    return 0;
}