#include <bits/stdc++.h>
using namespace std;
#define MAXV 2147483647
#define MINV -2147483647
#define SYC ios_base::sync_with_stdio(0); cin.tie(0)
#define ll unsigned long long int
#define For(i,n) for(int i =0 ; i< n ; i++)
#define M 1000000007
#define FR freopen("/Users/naveen/Documents/online_code/input.txt","r",stdin)
#define FW freopen("/Users/naveen/Documents/online_code/output.txt","w",stdout)
int main(){
    string s1,s2;
    cin>>s1>>s2;
    int index=s1.size();
    for(int i =1 ; i< s1.size() ; i++){
        if(s1[i]>=s2[0]){
            index=i;
            break;
        }
    }
    cout<<s1.substr(0,index)+s2[0]<<endl;
    return 0;
}
