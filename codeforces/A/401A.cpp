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
    int n,k;
    cin>>n>>k;
    int a[n];
    int res=0;
    for(int i = 0 ; i < n ; i++){
        cin>>a[i];
        if(abs(a[i])<=k){
            res+=a[i];
        }
    }
    res=abs(res);
//    cout<<res<<endl;
    int cnt=0;
    for(int i = k ; i>=1 ; i--){
        while(i<=res){
            cnt++;
            res=res-i;
            if(res<=0){
                cout<<cnt<<endl;
                return 0;
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}
