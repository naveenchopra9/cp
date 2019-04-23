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

int main(){

    ll y,k,n;
    cin>>y>>k>>n;
    ll finalv = (n/k)*k;
    ll startv=(k-(y%k)+k)%k;
    if(startv==0){
        startv=k;
    }
    bool t=false;
//    cout<<startv<<" "<<finalv<<endl;
//    if(startv+y==finalv){
//        startv+=y;
//    }
    for(ll i =startv ; i<=finalv-y ; i+=k){
        cout<<i<<" ";
        t=true;
    }
    if(!t)cout<<"-1"<<endl;
    return 0;
}
