#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

int main() {
int t;
cin>>t;
while(t--)
{
    ll n;
    cin>>n;
    ll x = n%4;
    ll y = n/4;
    ll a2=0,b3=0,c4=0,d5=0,e=0,f=0;
    /*
    Yaha pe a2 two faces  visible ka maximum sum
    waise hi b3 , c4 ,d5 ka 15 18 and 20 resp
    */
    switch (x)
    {
    case 1: d5=1; break; //5 faces
    case 2: c4=2; break; // 4 faces
    case 3: c4=2,b3=1; break;  //2 with 4 faces , 1 with 3 faces  
    }
    if(y>0)
    {
        a2=y*4; //2 faces
        f=(4-x)*4; // Addition of the topmost view
        
    }
    ll sum= (a2*11)+(b3*15)+(c4*18)+(d5*20)+f;
    cout<<sum<<endl;
}
    return 0;
}