#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--)
{
    int g;
    cin>>g;
    while(g--)
    {
        int i,n,q;
        cin>>i>>n>>q;
        int count=0;
      //  int ar[n]={i}; isse mat use karna TLE ho rha tha IDK why
      
        // The Solution is RIGHT only TLE PROBLEM
        //1 for Head 
        //2 For Tails
        /*
        for(int j=0;j<n;j++)
        { 
            if(ar[j]==1)
                ar[j]=2;
                else 
                ar[j]=1;
                if(j>0)
                {
            for (int k = 0; k < j; k++)
            {
                if(ar[k]==1)
                ar[k]=2;
                else if(ar[k]==2)
                ar[k]=1;
            }
                }
            
        }
        */
        //Brute Force Approach
        //Approach 1
       /* for (int j = 0; j < n; j++)
        {
            if(ar[j]==q)
            count++;
        }
        */
       //Second Approach (Same TIME Complexity)
       /*
       sort(ar,ar+n);
       if(q==1)
       {
           int j = 0;
           while(ar[j]==1)
           {    count++;
               j++;
           }
       }
       else if(q==2)
       {
           int k=n-1;
           while(ar[k]==2)
           {
               count++;
               k--;
           }
       }
       */
      //Final Approach
      if(i==q)
      {
     count= n/2;
      }
      else
     { 
        count=n-n/2;
     }

     cout<<count<<endl;   
    }
}
    return 0;
}