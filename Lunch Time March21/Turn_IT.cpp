#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--)
{   int flag=0;
    int u,v,a,s;
    cin>>u>>v>>a>>s;
    if(u==v)
    flag=1; 
    else  if((v*v)>= (u*u)-2*a*s)
    flag=1;

    if(flag==1)
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
}
    return 0;
}