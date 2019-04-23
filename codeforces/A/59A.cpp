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
    string s;
    cin>>s;
    int a[256];
    memset(a,0,sizeof(a));
    for(auto x : s){
        a[x]++;
    }
    int cntl=0,cntu=0;
    for(int i =0 ; i< 256 ; i++){
        if(i<95){
            cntu+=a[i];
        }
        else{
            cntl+=a[i];
        }
    }
    if(cntu>cntl){
        for(auto & x : s)
            x=toupper(x);
    }
    else{
        for(auto & x : s)
            x=tolower(x);
    }
    cout<<s<<endl;
    return 0;
}
