#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
const int N=1e6 + 5;

int a[N];

int main() {
	// your code goes here
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>a[i];
	sort(a,a+n);
	ll ans=0;
	for(int i=0;i<n;i++)
	{
	    ans= max(ans,(n-i)* 1ll*a[i]);
	    
	}
	cout<<ans<<endl;
	return 0;
}
