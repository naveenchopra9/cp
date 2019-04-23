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

    string str;
    cin>>str;
    if(str[0]!='-'){
        cout<<str<<endl;
    }
    else{

        if(str[str.length()-1]>=str[str.length()-2]){
            cout<<str.substr(0,str.length()-1);
        }
        else{
            if(str[0]=='-' && str.length()==3){
                if(str[2]=='0'){
                    cout<<0<<endl;
                }
                else{
                    cout<<str.substr(0,str.length()-2)+str[str.length()-1]<<endl;
                }
            }
            else{
                cout<<str.substr(0,str.length()-2)+str[str.length()-1]<<endl;
            }
        }
    }
    return 0;
}
