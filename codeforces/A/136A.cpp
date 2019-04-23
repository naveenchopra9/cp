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
    int n;
    cin>>n;
    map<int,int>mp;
    int x;
    for(int i =1 ; i<=n ; i++){
        cin>>x;
        mp[x]=i;
    }
    for(auto x:mp ){
        cout<<x.second<<" ";
    }
    return 0;
}
