#include "/Users/naveen/stdc++.h"
//#include<bits/stdc++.h>
using namespace std;
#define MAXV 2147483647
#define MINV -2147483647
#define SYC ios_base::sync_with_stdio(0); cin.tie(0)
#define FR freopen("/Users/naveen/Documents/online_code/input.txt","r",stdin)
#define FW freopen("/Users/naveen/Documents/online_code/output.txt","w",stdout)
#define M 1000000007
int maxv(int a,int b){
    if(a>b)return a;
    return b;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,W;
        cin>>n>>W;

        int price[n];

        int weight[n];

        for(int i =0 ; i < n ; i++){
            cin>>price[i];
        }
        for(int i =0 ; i< n ; i++){
            cin>>weight[i];
        }
        int dp[n+1][W+1];

        for(int i =0 ; i < n ; i++)dp[i][0]=0;

        for(int i =0 ; i< n ; i++){

            for(int j = 1 ; j <=W ; j++){

                int profit1=0,profit2=0;
                if(j>=weight[i]){
                    profit1=price[i]+dp[i][j-weight[i]];
                }
                if(i>0){
                    profit2=dp[i-1][j];
                }
                dp[i][j]=maxv(profit1, profit2);
            }
        }
        cout<<dp[n-1][W]<<endl;
    }
    return 0;
}
