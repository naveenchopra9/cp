#include <bits/stdc++.h>
using namespace std;
#define MAXV 2147483647
#define MINV -2147483647
#define SYC ios_base::sync_with_stdio(0); cin.tie(0)
#define ll unsigned long long int
#define For(i,n) for(int i =0 ; i< n ; i++)
#define M 1000000007
#define FR freopen("/Users/naveen/Documents/online_code/input.txt","r",stdin)
#define FW freopen("/Users/naveen/Documents/online_code/output.txt","w",stdout)
int main(){
    int n,k ;
    cin>>n>>k;
    int a[n];

    For(i,n){
        cin>>a[i];
    }

    ll dp[n],sum=0;
    memset(dp,0,sizeof(dp));

    For(i,k-1){
        sum+=a[i];
    }

    for( int i =k-1 ; i< n ; i++){
        sum+=a[i];
        dp[i-k+1]=sum;
        sum-=a[i-k+1];
    }
    vector<pair<ll,ll>> res_a;

    res_a.resize(n,{-1,-1});

    ll maxv=0,pos=-1;

    for(ll i =k-1 ; i< n ; i++)
    {
        if(dp[i-k+1]>maxv)
        {
            maxv=dp[i-k+1];
            pos=i-k+1;
        }
        res_a[i]={maxv,pos};
    }
//    for(auto x: res_a){
//        cout<<x.first<<" "<<x.second<<endl;
//    }
    ll res1=-1,res2=-1;
    maxv=0;
    for(int i = k ; i< n-k+1 ; i++){
        if(maxv<res_a[i-1].first+dp[i]){
            maxv=res_a[i-1].first+dp[i];
            res1=res_a[i-1].second;
            res2=i;
        }
    }

    cout<<res1+1<<" "<<res2+1<<endl;
    return 0;
}
