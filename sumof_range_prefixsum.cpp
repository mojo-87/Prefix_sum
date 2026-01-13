#include<bits/stdc++.h>
#define ll long long
#define vll vector<ll>
#define no cout<<"NO"<<"\n";
#define yes cout<<"YES"<<"\n";
#define fast() ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
void solve()
{
    ll n,m,l,r,t,sum=0;
    cin>>n;
    vll prefix_sum(n+1,0),prefix_ss(n+1,0);
    vll arr(n+1),sorted_arr(n+1);
    for(ll i=1; i<=n; i++)
    {
        cin>>arr[i];
        sorted_arr[i]=arr[i];
        prefix_sum[i]=prefix_sum[i-1]+arr[i];

    }
    sort(sorted_arr.begin(),sorted_arr.end());
    for(int i=1; i<=n; i++)
    {
        prefix_ss[i]=prefix_ss[i-1]+sorted_arr[i];
    }

    cin>>m;
    while(m--)
    {
        cin>>t >> l>> r;
        if(t==2)
        {
           cout<<prefix_ss[r]-prefix_ss[l-1]<<endl;
        }
        else
        {
            cout<<prefix_sum[r]-prefix_sum[l-1]<<endl;
        }


    }


}
int main()
{
    fast()
    solve();
//    ll tc;
//    cin>>tc;
//    while(tc--)
//    {
//        solve();
//
//    }
    return 0;
}


