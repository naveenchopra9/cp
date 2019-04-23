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
    double result=0.0,n,m;
    cin>>m>>n;
    for(int i =1 ; i<= m ; i++){
        result+=(pow(i/m,n)-pow((i-1)/m,n))*i;
    }
    printf("%.10f",result);
    return 0;
}
