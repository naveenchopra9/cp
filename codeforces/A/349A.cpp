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
    int n ;
    cin>>n;
    vector<int>vec(n);
    for(int i =0 ; i< n ; i++){
        cin>>vec[i];
    }
    int m25=0,m50=0,m100=0;

    for(int i = 0 ; i< n ; i++){

        if(vec[i]==50){
            if(m25<=0){
                cout<<"NO"<<endl;
                return 0;
            }
            m25--;
            m50++;
        }
        else if(vec[i]==25){
            m25++;
        }
        else if(vec[i]==100){
            if((m50>0 && m25>0)|| m25>=3){
                if(m50>0 && m25>0){
                    m50--;
                    m25--;
                }
                else{
                    m25=m25-3;
                }
            }
            else{
                cout<<"NO"<<endl;
                return 0;
            }
            m100++;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
