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
#define MOD 1000000007
ll dp[2019][2019],k,n;
ll find_sol(ll idx, ll cnt){
    if(dp[idx][cnt]!=-1)return dp[idx][cnt];

    if(idx>n)return 0;
    else if(k==cnt) return 1;
    ll res=0;
    for(int i = 1 ; idx*i<=n; i++){
        res=(res+find_sol(idx*i,cnt+1))%MOD;
    }
    return dp[idx][cnt]=res%MOD;
}
int main(){
    for(int i =0 ; i<2019; i++){
        for(int j =0 ; j< 2019 ; j++){
            dp[i][j]=-1;
        }
    }
    cin>>n>>k;
    ll s=0;
    for(int i =1 ; i<=n ; i++){
        s=(s+find_sol(i,1))%MOD;
    }
    cout<<s%MOD<<endl;
    return 0;
}
