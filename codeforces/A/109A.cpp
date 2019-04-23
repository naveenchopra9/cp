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
bool visit[1000001];
//int parent[1000001];
int main(){
    int n ;
    cin>>n;
    for(int i = 0 ; i <=n ; i++){;
        visit[i]=false;
    }
    visit[0]=true;
    visit[4]=true;
    visit[7]=true;
    for(int i =8 ; i<=n ; i++){
        if(visit[i-7]==true){
            visit[i]=true;
        }
        else if(visit[i-4]==true){
            visit[i]=true;
        }
    }
    string res;
    while(visit[n]==true && n>0){
        if(visit[n-7]==true){
            res+="7";
            n=n-7;
        }
        else if(visit[n-4]==true){
            res+="4";
            n=n-4;
        }
        else{
            cout<<"-1"<<endl;
            return 0;
            break;
        }
    }
//    cout<<n<<endl;
//    for(int i = 0 ; i< n ;i++){
//        cout<<i<<" "<<" "<<visit[i]<<endl;
    if(res.size()==0){
        cout<<"-1"<<endl;
        return 0;
    }
    sort(res.begin(),res.end());
    cout<<res<<endl;
    return 0;
}
