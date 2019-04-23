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
#define MOD 1000000007;
int main(){
    int n;
    cin>>n;
    int x;
    unordered_map<int, int>mp;
    int gt=0;
    for(int i  =0 ; i< n  ;i++){
        cin>>x;
        if(x<=n)
           mp[x]++;
        else
            gt++;
    }

    cout<<gt+(n-mp.size()-gt);
    return 0;
}
