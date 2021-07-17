// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         int n;
//         cin>>n;
//         int ans=0;
//         long long int ar[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin>>ar[i];
//         }

//        sort(ar,ar+n);

// //  This Approach only passed the sample test cases and its incomplete

//        ar[n-1] = ar[0];
//        for (int i = 0; i < n; i++)
//        {
//            ans = ans+ ar[i]/ar[0];
//        }
       
//         cout<<ans<<endl;
        
//     }
    
//     return 0;
// }

#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll arr[n];
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int max = arr[n-1];
        int mini = arr[0];
        int res=0,j=1,fin=0,ans=0;
        while(j<=max){
            for(int i=0;i<n;i++){
                if(arr[i]/j < 0){
                    break;
                }
                res += arr[i]/j;
            }
            if(j==1)
                fin=res;
            fin = min(fin,res);
            j++;
        }
        arr[n-1] = mini;
        for(int i=0;i<n;i++){
            ans += arr[i]/mini;
        }
        ans = min(ans,fin);
        cout<<ans<<endl;
    }
    
    return 0;
}