#include "/Users/naveen/stdc++.h"
//#include<bits/stdc++.h>
using namespace std;
#define MAXV 2147483647
#define MINV -2147483647
#define SYC ios_base::sync_with_stdio(0); cin.tie(0)
#define FR freopen("/Users/naveen/Documents/online_code/input.txt","r",stdin)
#define FW freopen("/Users/naveen/Documents/online_code/output.txt","w",stdout)
#define M 1000000007
int dp[1000][1000];
int find_sol(string s1, string s2){
    int maxv=0;
    for(int i =1 ; i<= s1.length() ; i++){

        for(int j =1 ; j <= s2.length() ; j++){

            if(s1[i-1]==s2[j-1])
                dp[i][j]=1+dp[i-1][j-1];
            else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);

            }
            maxv=max(maxv,dp[i][j]);
        }
    }
    return maxv;
}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    cout<<find_sol(s1,s2);
    return 0;
}
