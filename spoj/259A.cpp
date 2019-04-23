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
    string str[8];

    for(int i =0 ; i< 8 ; i++)cin>>str[i];

    for(int i =0 ; i< 8 ; i++){

        for(int j =0 ; j<8 ; j++){
            if(str[i][j]==str[i][(j+1)%8]){
//                cout<<i<<" "<<j<<endl;
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
