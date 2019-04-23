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
    string s;
    vector<string>res;
    string result="";
    bool flag=false;
    while(getline(cin,s)){
        result="";
        for(int i =0 ; i< s.length() ; i++){
            if(s[i]=='"'&& flag==false){
                result+="``";
                flag=true;
            }
            else if(s[i]=='"'&& flag){
                result+="''";
                flag=false;
            }
            else{
                result+=s[i];
            }

        }
        res.push_back(result);
    }
    for(auto x: res){
        cout<<x<<endl;
    }
}
