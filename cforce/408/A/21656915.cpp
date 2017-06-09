#include<iostream>
using namespace std;

int main()
{
    int n,min,i,j,x;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    min = -1;
    int sum=0;
    for(i=0;i<n;i++)
    {
        
        for(j=0;j<a[i];j++)
        {
	        cin>>x;
	        sum+=x*5;		
    	}
	 	
	 	sum+=a[i]*15;
        if(sum<min || min == -1)
            min=sum;
        sum=0;       
    }
    cout<<min;
    return 0;
}