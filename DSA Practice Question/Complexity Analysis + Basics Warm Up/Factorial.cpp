#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
// Iss Question mein bas hum jo number diya hai uske bas factorial of that number of zeros batane hai at the end.

int main() {
ll t;
cin>>t;
while(t--)
{ ll n;
 cin>>n;
 ll count=0;
 ll temp=5;
/* for (ll i = 1; i <= n; i++)
 {
    if((i%10==0))
    count++;
   else if(i%2==0 || i%5==0)
    {   if(temp==0)
        temp=i;
        else
        temp=temp*i;
        if(temp%10==0)
        {
            temp=0;
            count++;
        }
    }
    
 }
isme kuch cases miss out ho rhe the  so discarded
*/ 
while((n/temp)>0)
{ // Logic yahi hai ki Ek no 5 ki power se divide karte jao jab tak 5^n > Number given
// 5 ke multiple se divide isliye kyonki isse saare no fo zeroes pata chl jaenge
    count = count + n/temp;
    temp=temp*5;
}
 cout<<count<<endl;
 


}
    return 0;
}