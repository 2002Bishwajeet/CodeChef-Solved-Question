#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int d,x,y,z;
        /* 
        d= no of days jo y kaam kare
        x = constant work unit everyday
        y = amount of work jo d days kare
        z = amount of work after d days in the week
        
         */
        cin>>d>>x>>y>>z;
        int A = x*7;
        int B = d*y + z*(7-d);
        cout<<max(A,B)<<endl;

    }
    return 0;
}