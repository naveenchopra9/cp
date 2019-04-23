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
    ll n ,d;
    cin>>n>>d;
    vector<ll > vec(n);
    for(ll i =0 ; i< n ; i++){
        cin>>vec[i];
    }

    ll l=0,r=2;
    ll  result=0;
    while(l<n || r<n){

        while(vec[r]-vec[l]<=d && r<n){
                r++;
        }
        r--;
        result+=(unsigned long long int)((r-l)*(r-l-1))/2;
        l++;
        if(l==n)break;
    }
    printf("%lld",result);
    return 0;
}
