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
    int n,v;
    cin>>n>>v;
    int res=0;
    if(n-1<=v){
        res=n-1;
    }
    else{
        res=v;
        for(int i = 2 ; i<= n-v ; i++){
            res=res+i;
        }
    }
    cout<<res<<endl;
}
