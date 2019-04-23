#include "/Users/naveen/stdc++.h"
//#include<bits/stdc++.h>
using namespace std;
#define MAXV 2147483647
#define MINV -2147483647
#define SYC ios_base::sync_with_stdio(0); cin.tie(0)
#define FR freopen("/Users/naveen/Documents/online_code/input.txt","r",stdin)
#define FW freopen("/Users/naveen/Documents/online_code/output.txt","w",stdout)
#define M 1000000007
int dp[1000][1000][1000];
int find_sol(string s1, string s2,int i1, int i2 , int cnt){
    if(i1==s1.length()|| i2==s2.length()){
        return cnt;
    }

    if(dp[i1][i2][cnt]!=-1)return dp[i1][i2][cnt];

    int c3=cnt;

    if(s1[i1]==s2[i2]){
         c3=find_sol(s1, s2, i1+1, i2+1, cnt+1);
    }

    int c1=find_sol(s1, s2, i1, i2+1, 0);

    int c2=find_sol(s1, s2, i1+1, i2, 0);

    dp[i1][i2][cnt]=max(cnt,max(c1,c2));
    return max(c3,max(c1,c2));
}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    for(int i =0 ; i < s1.length() ; i++){
        for(int j = 0 ;  j < s2.length() ; j++){
            for(int k =0 ;k <max(s1.length() ,s2.length()); k++){
                dp[i][j][k]=-1;
            }
        }
    }

    cout<<find_sol(s1,s2,0,0,0);
    return 0;
}
