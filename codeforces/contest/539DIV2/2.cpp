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

    vector<int>vec(n);
    map<int,int>mp;

    for(int i = 0 ; i< n ; i++){
        cin>>vec[i];
        mp[vec[i]]++;
    }

    for(int i=100; i>=1 ; i++){

        if(mp[i]!=0){

            for(int k = 1 ; k<=100; k++){
                if(mp[k]!=0){
                    for(int j = 2 ; j<=100 ; j++){
                        if(i%j==0 ){

                        }
                    }
                }
            }
        }
    }

//    cout<<res< <endl;
}
