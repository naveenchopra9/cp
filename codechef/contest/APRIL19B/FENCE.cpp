#include <bits/stdc++.h>
using namespace std;
#define MAXV 2147483647
#define MINV -2147483647
#define SYC ios_base::sync_with_stdio(0); cin.tie(0)
#define ll unsigned long long int
#define For(i,n) for(int i =0 ; i< n ; i++)
#define M 1000000007
#define FR freopen("/Users/naveen/Documents/online_code/input.txt","r",stdin)
#define FW freopen("/Users/naveen/Documents/online_code/output.txt","w",stdout)
int a[100000+5];
int main(){
    int t,n,k,x,y,m;
    cin>>t;
    map<pair<int,int>,bool >mp;
    vector<pair<int,int> > vec;

    while(t--){
        cin>>n>>m>>k;
        For(i,k){
            cin>>x>>y;
            mp[{x,y}]=true;
            vec.push_back({x,y});
        }
        long res=0;
        For(i,k){

            if(mp[{vec[i].first-1,vec[i].second}]!=true){
                res++;
            }
            if(mp[{vec[i].first+1,vec[i].second}]!=true){
                res++;
            }
            if(mp[{vec[i].first,vec[i].second-1}]!=true){
                res++;
            }
            if(mp[{vec[i].first,vec[i].second+1}]!=true){
                res++;
            }
        }
        cout<<res<<endl;
        mp.clear();
        vec.clear();
    }
    return 0;
}
