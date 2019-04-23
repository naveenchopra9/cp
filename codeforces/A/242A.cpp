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
    int x,y,a,b;
    cin>>x>>y>>a>>b;
    vector<pair<int, int> >res;
    for(int i=a; i<=x; i++){
        for(int j= b; j<=y; j++){
//            cout<<i<<j<<endl;
            if(i>j){
                res.push_back({i,j});
            }
        }
    }
    cout<<res.size()<<endl;
    for(auto x: res){
        cout<<x.first<<" "<<x.second<<endl;
    }
    return 0;
}
