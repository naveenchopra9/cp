#include "/Users/naveen/stdc++.h"
//#include <bits/stdc++.h>
using namespace std;
#define MAXV 2147483647
#define MINV -2147483647
#define SYC ios_base::sync_with_stdio(0); cin.tie(0)
#define rep(i,n) for(i=0;i<n;i++)
#define ll long long int
#define elif else if
#define pii pair<int,int>
#define mp make_pair
#define pb push_back
#define M 1000000007
#define FR freopen("/Users/naveen/Documents/online_code/input.txt","r",stdin)
#define FW freopen("/Users/naveen/Documents/online_code/output.txt","w",stdout)

int main(){
    int n,v,x,y,i ;
    cin>>n>>v;
    int adj[3000+1];

    memset(adj,0,sizeof(adj));
    rep(i,n){
        cin>>x>>y;
        adj[x]=adj[x]+y;
    }
    vector<int>res;
    res.pb(0);
    for(int i = 1 ; i<= 3000 ; i++){
        res.pb(adj[i]);
    }

    int r=0;

//    if(res[0]>=v){
//        r=v;
//        res[0]-=v;
//    }
//    else{
//        r=res[0];
//        res[0]=0;
//    }
    for(int i = 1 ; i<= res.size() ; i++){

        if(res[i-1]>=v){
            r+=v;
        }
        else{
            r+=res[i-1];

            if(v-res[i-1]>=res[i]){

                r+=res[i];
                res[i]=0;
            }
            else{
                r+=v-res[i-1];
                res[i]=res[i]-(v-res[i-1]);
            }
        }
    }
    cout<<r<<endl;
    return 0;
}
