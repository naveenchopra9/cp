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
    int n;
    cin>>n;
    int cnt=0;
    int x,y;
    int sum1=0,sum2=0;
    for(int i = 0 ; i<n ; i++){
        cin>>x>>y;
        sum1+=x;
        sum2+=y;
        if(x%2!=0&&y%2==0){
            cnt++;
        }
        if(x%2==0&&y%2!=0){
            cnt++;
        }
    }
//    cout<<cnt<<endl;
    if(sum1%2==0 && sum2%2==0)cout<<"0"<<endl;
    else if(sum1%2==1 && sum2%2==1){
        if(cnt>0)cout<<1<<endl;
        else cout<<-1<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }
}
