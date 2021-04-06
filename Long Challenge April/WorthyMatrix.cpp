#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--)
{
   int n,m,k;
   cin>>n>>m>>k;
   int ar[n][m];
   for (int i = 0; i < n; i++)
   {
       for (int j = 0; j < m; j++)
       {
           cin>>ar[i][j];
       }
       
   }
   int ans=0;
   int count=0;
  int l=min(n,m);

   //This Will Happen Regardless of Rows and Columns cause 1x1 is a square matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(ar[i][j]>=k)
            ++ans;
        }
        
    }
 //Now let's Start the Loop
 
  
 cout<<ans<<endl;   
}
    return 0;
}