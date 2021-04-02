#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--)
{
    float k1,k2,k3,v;
    cin>>k1>>k2>>k3>>v;
    float finalspeed =k1*k2*k3*v;

    float time = 100/finalspeed;
     float rtime= (int)(time * 100 + .5);
     rtime = float(rtime)/100;
   
    if(rtime<float(9.58))
    cout<<"YES"<<endl;
    else 
    cout<<"NO"<<endl;
   
}
    return 0;
}