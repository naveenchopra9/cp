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
    int n,m;
    cin>>n>>m;
    string str[n];
    for(int i =0; i<n ; i++){
        cin>>str[i];
    }
    map<int,bool>mp;
    for(int i =0; i<m ; i++){
        int maxv=-1;

        for(int j =0 ; j< n ; j++){
                if( maxv< (str[j][i]-'0') ){

                    maxv=str[j][i]-'0';
                }
            }
        for(int j =0 ; j< n ; j++){
            if( maxv==(str[j][i]-'0') ){
               mp[j]=true;
            }
        }
    }
    cout<<mp.size()<<endl;

    return 0;
}
