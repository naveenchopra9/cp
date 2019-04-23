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
vector<int>adj[40+1];
int main(){
    int n,k;
    cin>>n>>k;
    int a_i[k+1];
    bool visit[5000];
    memset(visit,false,sizeof(visit));
    for(int i =1 ; i<= k  ; i++){
        cin>>a_i[i];
        adj[i].push_back(a_i[i]);
        visit[a_i[i]]=true;
    }
    int kk=1;
    for(int i =1 ; i<=n*k ; i++){
        if(!visit[i]){
            adj[kk].push_back(i);
            if(adj[kk].size()==n){
                kk++;
            }
        }
    }
    for(int i =1 ; i<=k; i++){
        for(auto x: adj[i]){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}
