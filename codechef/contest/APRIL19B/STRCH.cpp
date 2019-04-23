#include "/Users/naveen/stdc++.h"
//#include <bits/stdc++.h>
using namespace std;
#define MAXV 2147483647
#define MINV -2147483647
#define SYC ios_base::sync_with_stdio(0); cin.tie(0)
#define ll unsigned long long int
#define For(i,n) for(int i =0 ; i< n ; i++)
#define M 1000000007
#define FR freopen("/Users/naveen/Documents/online_code/input.txt","r",stdin)
#define FW freopen("/Users/naveen/Documents/online_code/output.txt","w",stdout)
long long find_sol(string s, char st){
    int position_st=-1;
    long long res=0;
    for(int i =0  ; i< s.size() ; i++){
        if(s[i]==st){
            position_st=i;
        }
        if(position_st!=-1){
            res+=(position_st+1);
        }
    }
    return res;
}
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        string s;
        char st;
        cin>>s>>st;
        cout<<find_sol(s,st)<<endl;
    }
    return 0;
}
