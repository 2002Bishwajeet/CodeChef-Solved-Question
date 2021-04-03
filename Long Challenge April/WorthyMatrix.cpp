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
   int flag=0;
   if(n==m)
   flag=1;
   else if(n<m) //row less than column
   flag=2;
   else
   flag=0; //column less than row

   //This Will Happen Regardless of Rows and Columns cause its square matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(ar[i][j]>=k)
            ++ans;
        }
        
    }
  if(flag==1) //mltb rows and columns same
  {
      //Let's Try to Create 2x2
      for (int i = 0; i < n; i++)
      {
          for(int j=0;j<2;j++)
          {
              for(int k=0;k<2;k++)
              cout<<ar[i+j][i+k]<<" ";
              cout<<endl;
          }
          cout<<"--------------------"<<endl;
      }
      
  }
 //cout<<ans<<endl;   
}
    return 0;
}