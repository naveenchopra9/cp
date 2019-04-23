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
//     n, k, l, c, d, p, nl, np,
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int res1=(k*l)/nl;
    int res2=(c*d);
    int res3=(p/np);
    cout<<min(res1,min(res2,res3))/n<<endl;
    return 0;
}
