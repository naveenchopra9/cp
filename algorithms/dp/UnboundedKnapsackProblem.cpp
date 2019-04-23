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
int find_sol(int price[] , int weight[] ,int W , int index,int n,int** dp){
    if(W<=0 || index>=n)return 0;
    if(dp[W][index]!=-1) return dp[W][index];

    int profit1=0;
    if(W>=weight[index]){
        profit1=price[index]+find_sol(price, weight, W-weight[index], index+1,n,dp);
    }

    int profit2=find_sol(price, weight, W, index+1,n,dp );
    dp[W][index]=maxv(profit1,profit2);
    return dp[W][index];
}


// The above algorithm will be using O(N*C) space for the memoization array.
// Other than that we will use O(N) space for the recursion call-stack. So the
//  total space complexity will be O(N*C + N), which is asymptotically equivalent to O(N*C).
int main(){
    int n,W;
    cin>>n;

    int price[n];

    int weight[n];

    for(int i =0 ; i < n ; i++){
        cin>>price[i];
    }
    for(int i =0 ; i< n ; i++){
        cin>>weight[i];
    }

    cin>>W;
    int** dp = new int*[W+1];

    for(int i=0; i<W; i++)
    {
        dp[i] = new int[n+1];
    }
    for(int i =0 ; i<= W ; i++){
        for(int j =0 ; j<= n ; j++){
            dp[i][j]=-1;
        }
    }
    cout<<find_sol(price,weight,W,0,n,dp)<<endl;
    return 0;
}
