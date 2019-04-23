#include "/Users/naveen/stdc++.h"
//#include<bits/stdc++.h>
using namespace std;
#define MAXV 2147483647
#define MINV -2147483647
#define SYC ios_base::sync_with_stdio(0); cin.tie(0)
#define FR freopen("/Users/naveen/Documents/online_code/input.txt","r",stdin)
#define FW freopen("/Users/naveen/Documents/online_code/output.txt","w",stdout)
#define M 1000000007
 double dp[20][20],memo[(1<<20)];
int n,x[20],y[20],maxv=0;
double find_sol(int bitmask){
    if(memo[bitmask]>-0.5){
        return memo[bitmask];
    }
    if(bitmask==maxv){
        return memo[bitmask]=0;
    }

    int p1,p2;
    double ans=214748364.0;
    for(p1 =0 ; p1<= 2*n ; p1++){
        if(!(bitmask & (1<<p1))){
            break;
        }
    }
    for(p2 =p1+1 ; p2<= 2*n ; p2++){
        if(!(bitmask & (1<<p2))){
            ans=min(ans,dp[p1][p2]+find_sol(bitmask|(1<<p1)|(1<<p2)));
        }
    }
    return memo[bitmask]=ans;
}
int main(){
    FR;
    FW;
//    cin>>t;
    int t=0;
    string s;
    while(cin>>n){
        if(n==0)return 0;
        memset(dp,0,sizeof(dp));
        for(int i =0 ; i< 2* n ; i++){
            cin>>s>>x[i]>>y[i];
        }
        for(int i = 0 ; i< 2*n ; i++){

            for(int j = i+1 ;  j < 2*n ; j++){

                dp[j][i]=dp[i][j]=hypot(x[i]-x[j], y[i]-y[j]);
            }
        }
        maxv=(1<<(2*n))-1;
        memset(memo,-1,sizeof(memo));
//        cout<<find_sol(0)<<endl;
        printf("Case %d: %0.2f\n",++t,find_sol(0));
    }
    return 0;
}
