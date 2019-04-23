
#include "/Users/naveen/stdc++.h"
//#include<bits/stdc++.h>
using namespace std;
#define MAXV 2147483647
#define MINV -2147483647
#define SYC ios_base::sync_with_stdio(0); cin.tie(0)
#define FR freopen("/Users/naveen/Documents/online_code/input.txt","r",stdin)
#define FW freopen("/Users/naveen/Documents/online_code/output.txt","w",stdout)
#define M 1000000007

int main(){
    int t;
    cin>>t;
    int n,m;
    while(t--){
        cin>>n>>m;
        string str[n];
        for(int i  = 0 ; i< n ; i++){
            cin>>str[i];
        }
        int dp[n][m];
        memset(dp,0,sizeof(dp));

        for(int i =0 ; i< n  ; i++){
                if(i%2==0){
                    for(int j =0 ; j<m ; j++){
                        if(i==0){
                            if(j == 0){
                                if(str[i][j]=='0' )
                                    dp[i][j]=0;
                                else if(str[i][j]=='T')
                                    dp[i][j]=1;
                                else
                                    dp[i][j]=-1;

                            }
                            else{
                                if(str[i][j]=='0' && dp[i][j-1]!=-1)
                                    dp[i][j]=dp[i][j-1];
                                else if(str[i][j]=='T' && dp[i][j-1]!=-1)
                                    dp[i][j]=dp[i][j-1]+1;
                                else
                                    dp[i][j]=-1;
                            }
                        }
                        else{
                            if(j == 0){
                                    if(str[i][j]=='0' && dp[i-1][j]!=-1)
                                        dp[i][j]=dp[i-1][j];
                                    else if(str[i][j]=='T' && dp[i-1][j]!=-1)
                                        dp[i][j]=dp[i-1][j]+1;
                                    else
                                        dp[i][j]=-1;
                                }
                            else{
                                if(str[i][j]=='0' && (dp[i-1][j]!=-1 || dp[i][j-1]!=-1) )
                                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                                else if(str[i][j]=='T' && (dp[i-1][j]!=-1 || dp[i][j-1]!=-1) )
                                    dp[i][j]=max(dp[i-1][j],dp[i][j-1])+1;
                                else
                                    dp[i][j]=-1;
                            }
                        }
                    }
                }
                else{
                    for(int j =m-1 ;  j>=0 ;  j--){
                        if(j == m-1){
                            if(str[i][j]=='0' && dp[i-1][j]!=-1)
                                dp[i][j]=dp[i-1][j];
                            else if(str[i][j]=='T' && dp[i-1][j]!=-1)
                                dp[i][j]=dp[i-1][j]+1;
                            else
                                dp[i][j]=-1;
                        }
                        else{
                            if(str[i][j]=='0' && (dp[i-1][j]!=-1 || dp[i][j+1]!=-1) )
                                dp[i][j]=max(dp[i-1][j],dp[i][j+1]);
                            else if(str[i][j]=='T' && (dp[i-1][j]!=-1 || dp[i][j+1]!=-1) ){
                                cout<<dp[i-1][j]<<" yes "<< dp[i][j+1]<<endl;
                                dp[i][j]=max(dp[i-1][j],dp[i][j+1])+1;
                                cout<<dp[i][j]<<i<<j<<endl<<endl;
                            }
                            else
                                dp[i][j]=-1;
                        }

                }
            }
//            for(int i =0 ; i< n ; i++){
//
//                for(int j = 0; j < m ; j++){
//                    cout<<dp[i][j]<<" ";
//                }
//                cout<<endl;
//            }
//            cout<<endl<<i<<endl;
        }
        int maxv=0;
        for(int i =0 ; i< n ; i++){

            for(int j = 0; j < m ; j++){
                // cout<<dp[i][j]<<" ";
                maxv=max(maxv,dp[i][j]);
            }

            // cout<<endl;
        }
        cout<<maxv<<endl;
    }

}
