#include<bits/stdc++.h>

using namespace std;

long long int fun(vector<long long int> v)
{
	long long int cnt=0;
	if(!v.size())
	return cnt;

	vector<long long int > t;
	long long int j=0;		
	for(long int i=1;i<v.size();i++)
	{
		if(v[i]>v[j])
		{
			cnt++; 
			j=i;
		}
		else
		t.push_back(v[i]);				
	}	
	return cnt + fun(t);

}

int main()
{

	long long int n,t,i,j;
	cin>>n;
	vector<long long int > v;
	
	for(i=0;i<n;i++)
	{	cin>>t;
		v.push_back(t);
	}

	sort(v.begin(),v.end());
	
	cout<<fun(v);

	return 0;
}

