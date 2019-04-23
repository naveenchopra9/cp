
#include "/Users/naveen/stdc++.h"
//#include<bits/stdc++.h>
using namespace std;
#define MAXV 2147483647
#define MINV -2147483647
#define SYC ios_base::sync_with_stdio(0); cin.tie(0)
#define FR freopen("/Users/naveen/Documents/online_code/input.txt","r",stdin)
#define FW freopen("/Users/naveen/Documents/online_code/output.txt","w",stdout)
#define M 1000000007

long long int dp[101][101],t,n,i,j,k,result=0;
int main(){
    cin>>t;
    while(t--){
    cin>>n;
    result=0;
        for( i =0 ; i< n ; i++){
            for( j =0 ; j<=i ; j++){
                cin>>dp[i][j];
                if(i==0){
                    dp[i][j]=dp[i][j];
                }
                else if(i==j){
                        dp[i][j]=dp[i][j]+dp[i-1][j-1];
                }
                else if(j==0){
                    dp[i][j]=dp[i][j]+dp[i-1][j];
                }
                else {
                dp[i][j]=dp[i][j]+max(dp[i-1][j],dp[i-1][j-1]);
                }
                result=max(result,dp[i][j]);
            }
        }
        cout<<result<<endl;
    }
    return 0;
}
