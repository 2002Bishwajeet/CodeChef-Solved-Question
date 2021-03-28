#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--)
{
    int x,n;
    cin>>n>>x;
    int ans=0;
    while(n--)
    {
        int g,i;
        cin>>g>>i;
        if(g<=x)
        ans= max(ans,i);
    }
    cout<<ans<<endl;;
}
    return 0;
}