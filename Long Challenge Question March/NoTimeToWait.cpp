#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,h,x;
	cin>>n>>h>>x;
	int ar[n];
	for(int i = 0 ;i<n;i++)
	cin>>ar[i];
	int flag=0;
	for(int i = 0 ;i<n;i++)
	{
	    if(ar[i]+x>=h)
	    {flag=1;
	    break;
	    }
	}
	if(flag==0)
	cout<<"NO"<<endl;
	else
	cout<<"YES"<<endl;
	return 0;
}
