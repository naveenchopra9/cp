#include "/Users/naveen/stdc++.h"
//#include<bits/stdc++.h>
using namespace std;
#define MAXV 2147483647
#define MINV -2147483647
#define SYC ios_base::sync_with_stdio(0); cin.tie(0)
#define FR freopen("/Users/naveen/Documents/online_code/input.txt","r",stdin)
#define FW freopen("/Users/naveen/Documents/online_code/output.txt","w",stdout)
#define M 1000000007
int dp[1000+10][1000+10];
int find_sol(string s, int st, unsigned long ed){
    if(ed<st) return 0;
    if(st==ed)return 1;
    if(dp[st][ed]!=-1)return dp[st][ed];

    if(s[st]==s[ed]){
        dp[st][ed]=(2+find_sol(s, st+1, ed-1));
        return dp[st][ed];
    }
    int p1 = find_sol(s, st+1, ed);
    int p2=find_sol(s, st, ed-1);
    dp[st][ed]=max(p1,p2);

    return dp[st][ed];
}

int main(){
    string s;
    cin>>s;
    for(int i =0 ; i<=s.size() ; i++){
        for(int j = 0 ; j < s.size() ; j++){
            dp[i][j]=-1;
        }
    }

    cout<<find_sol(s,0,s.length()-1)<<endl;
    return 0;
}
