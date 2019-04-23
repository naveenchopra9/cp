#include "/Users/naveen/stdc++.h"
//#include<bits/stdc++.h>
using namespace std;
#define MAXV 2147483647
#define MINV -2147483647
#define SYC ios_base::sync_with_stdio(0); cin.tie(0)
#define FR freopen("/Users/naveen/Documents/online_code/input.txt","r",stdin)
#define FW freopen("/Users/naveen/Documents/online_code/output.txt","w",stdout)
#define M 1000000007

int main(){
//    FR;
//    FW;

    bool cnt=false;
    string str[20],str1,s;
    int n,amount=0,t,temp=0;
    map<string,int>mp;
    while(cin>>n){
        for(int i =0 ; i< n ; i++){
            cin>>str[i];
            mp[str[i]]=0;
        }
        for(int i =0 ; i< n ; i++){
            cin>>str1;
            cin>>amount;
            cin>>t;
            if(t>0){
//                 cout<<str1<<amount<<t<<endl;
                temp=amount/t;
                mp[str1]+=-t*temp;
                for(int k =0 ; k< t ; k++){
                    cin>>s;
                    mp[s]+=temp;
                }
            }

        }
        if(cnt){
            cout<<endl;
        }
        cnt=true;
        for(int i =0 ; i< n ; i++){
            cout<<str[i]<<" "<<mp[str[i]]<<endl;
        }
    }
    return 0;
}
