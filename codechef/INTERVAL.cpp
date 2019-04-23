#include "/Users/naveen/stdc++.h"
//#include<bits/stdc++.h>
using namespace std;
#define MAXV 2147483647
#define MINV -2147483647
#define SYC ios_base::sync_with_stdio(0); cin.tie(0)
#define FR freopen("/Users/naveen/Documents/online_code/input.txt","r",stdin)
#define FW freopen("/Users/naveen/Documents/online_code/output.txt","w",stdout)
#define REP(i,n) for (ll i = 1; i <= n; i++)
typedef long long ll;
typedef vector<vector<ll> > matrix;
const ll MOD = 1000000007;

int main(){
    ll n,m ;
    cin>>n>>m;
    ll a[n];
    for(ll i =  0 ; i< n ; i++){
        cin>>a[n];
    }
    ll b[m];
    for(ll i =0 ; i< m ; i++){
        cin>>b[i];
    }
    ll presum[n];
    presum[0]=a[0];
    for(ll i =1 ; i< n ; i++){
        presum[i]=presum[i-1]+a[i];
    }
    ll dp[n];
    for(int i =0 ; i <= n-b[m-1] ; i++){
        dp[i]=presum[i+b[m-1]]-presum[i];
    }

    for(ll move=m-2 ; move>=0; move--){
        vector<ll>q(n);
        ll rear=-1, front=0;
        for(ll i = move+1 ; i<=move+b[move]-b[move+1]; i++){
            if(front<=rear ;)
        }
    }

    return 0;
}
