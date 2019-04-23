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
#define MOD 1000000007

int main(){
    FR;
    FW;
    int n,m;
    cin>>n>>m;
    string res;
    if(n>m){
        int i =0,j=0;
        while(i< n && j< m){
            res+="BG";
            i++;
            j++;
        }
        while(i<n){
            res+="B";
            i++;
        }
    }
    else{
        int i =0,j=0;
        while(i< n && j< m){
            res+="GB";
            i++;
            j++;
        }
        while(j<m){
            res+="G";
            j++;
        }
    }
    cout<<res<<endl;
    return 0;
}
