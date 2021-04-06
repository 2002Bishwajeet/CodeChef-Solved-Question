#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
void solve()
{
    ll n,m,k;
    cin>>n>>m>>k;
    double ar[n+1][m+1];
    for (ll i = 0; i <= n; i++)
    {
        for(ll j = 0; j <= m; j++)
        {
            if(i==0||j==0)
            ar[i][j]=0;
            else
            cin>>ar[i][j];
        }
    }
    for(ll i = 0; i<=n; i++)
    {
        double prev = 0;
        for(ll j = 0; j<=m; j++)
        {
            ar[i][j]+=prev;
            prev=ar[i][j];
        }
    }
    for(ll i = 0; i<=m; i++)
    {
        double prev = 0;
        for(ll j = 0; j <=n; j++)
        {
            ar[j][i]+=prev;
            prev=ar[j][i];
        }

    }
    ll m_min = min(m,n);
    ll ans = 0 ;
    for(ll u = 1 ; u<=m_min;u++)
    {
        for(ll i = u; i <= n; i++)
        {
            for(ll j = u; j <= m; j++)
            {
                if((ar[i][j]+ar[i-u][j-u]-ar[i][j-u]-ar[i-u][j])/(u*u)>=k)
                {
                    ans++;
                }
            }
        }
    }
    cout<<ans<<endl;
}
int main() {
int t;
cin>>t;
while(t--)
{
    solve();
}
    return 0;
}