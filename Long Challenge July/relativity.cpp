#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--)
    {
        int g,c;
        // c = speed of light and g = accln due to gravity
        cin>>g>>c;
        int calc = (c*c)/(2*g);
        cout<<calc<<endl;
    }
        
    return 0;
}