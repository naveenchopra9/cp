
#include "/Users/naveen/stdc++.h"
//#include<bits/stdc++.h>
using namespace std;
#define MAXV 2147483647
#define MINV -2147483647
#define SYC ios_base::sync_with_stdio(0); cin.tie(0)
#define FR freopen("/Users/naveen/Documents/online_code/input.txt","r",stdin)
#define FW freopen("/Users/naveen/Documents/online_code/output.txt","w",stdout)
#define M 1000000007
long a[10000+3],n,dp[10000+3],sum[10000+3],indexs[10000+5],i,size[10000+5];
vector<long>result;
int main(){
//    FR;
//    FW;
    bool temp=false;
    while(cin>>n){
        if(n==0){
            return 0;
        }
        if(temp)
        cout<<endl;
        temp=true;
    a[0]=0;
    for(int i =1 ; i<= n ; i++){
        cin>>a[i];
    }
    sum[0]=0;
    for(int i = 1 ; i<= n ; i++){
        sum[i]=sum[i-1]+a[i];
    }

    for(int i =0 ; i<= n+10 ; i++){
        dp[i]=MAXV;
    }
    dp[0]=0;
    indexs[0]=-1;
    for(int i = 1 ; i <= n ; i++){

        for(int j =0 ; j<= i ; j++){
            long temp1=(100-(sum[i]-sum[j]));
            long temp=dp[j]+(temp1*temp1);
            if(dp[i]>=temp){
                if(dp[i]>temp){
                    dp[i]=temp;
                    indexs[i]=j;
                    size[i]=size[j]+1;
                }
                else if(size[i]>size[j]+1){
                        size[i]=size[j]+1;
                        indexs[i]=j;
                }
            }
        }
    }
    i=n;
    while(indexs[i]>=0){
        result.push_back(i);
        i=indexs[i];
    }
    result.push_back(0);
    reverse(result.begin(),result.end());
    cout<<"p="<<dp[n]<<endl;
    long cnt=1;
    for(int i =0 ; i< result.size() ; i++){
            cnt++;
            cout<<" "<<result[i];
        if(cnt%30==0){
            cout<<endl;
        }
    }
    cout<<endl;
    result.clear();
    }
    return 0;
}
