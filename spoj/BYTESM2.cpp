
#include "/Users/naveen/stdc++.h"
//#include<bits/stdc++.h>
using namespace std;
#define MAXV 2147483647
#define MINV -2147483647
#define SYC ios_base::sync_with_stdio(0); cin.tie(0)
#define FR freopen("/Users/naveen/Documents/online_code/input.txt","r",stdin)
#define FW freopen("/Users/naveen/Documents/online_code/output.txt","w",stdout)
#define M 1000000007
int dp[100+2][100+2],ph[100+1][100+1];
int main(){
    int t;
    cin>>t;
    while(t--){
    int n , m ;
    cin>>n>>m;
    for(int i =0 ; i< n  ;i++){
        for(int j =0 ;  j < m ; j++){
            cin>>ph[i][j];
        }
    }

    memset(dp,0,sizeof(dp));

    for(int i =1 ; i<= n ; i++){

        for(int j =1 ; j<= m ; j++){

            dp[i][j]=max(dp[i-1][j-1],max(dp[i-1][j+1],dp[i-1][j]))+ph[i-1][j-1];
        }
    }
    int res=0;
    for(int i =1 ; i<=m ; i++){
        res=max(res,dp[n][i]);
    }
    cout<<res<<endl;
//    for(int i =1 ; i<= n ; i++){
//
//        for(int j =1 ; j<= m ; j++){
//            cout<<dp[i][j]<<" ";
//        }
//
//        cout<<endl;
//    }

    }
    return 0;

}
