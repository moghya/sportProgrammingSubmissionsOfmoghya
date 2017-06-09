#include <bits/stdc++.h>
using namespace std;
int main() {
	long long int a;
	cin>>a;
	a<=2?cout<<-1:(a%2?(cout<<a*a/2<<" "<<a*a/2+1):(cout<<a*a/4-1<<" "<<a*a/4+1));
}