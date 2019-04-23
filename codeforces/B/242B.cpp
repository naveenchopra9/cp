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
    int n;
    cin>>n;
    int x,y;
    vector< pair<int,int> > vec;
    for(int i =0 ; i<n ; i++){
        cin>>x>>y;
        vec.push_back({x,y});
    }
    int minv=MAXV,maxv=MINV;
    for(auto x : vec){
           minv=min(minv,x.first);
           maxv=max(maxv,x.second);
    }
    int i = 1;
    for(auto x : vec){
        if(x.first==minv && maxv==x.second){
            cout<<i<<endl;
            return 0;
        }
        i++;
    }
    cout<<"-1"<<endl;
    return 0;
}
