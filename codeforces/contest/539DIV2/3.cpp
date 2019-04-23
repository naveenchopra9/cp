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

    for(int i = 0 ; i< n ; i++){
        cin>>vec[i];
    }

    sort(vec.begin(),vec.end());

    int idx=0,end=n-1;
    while(idx<n && idx<end){

        int tempv=-1,minv=vec[idx]+vec[end];
        for(int i = 2 ; i<= 100 ; i++){
            if(vec[end]%i==0 && minv>((vec[end]/i)+(i*vec[idx]))){
                minv=((vec[end]/i)+(i*vec[idx]));
                tempv=i;
            }
        }
        if(tempv!=-1){
            vec[idx]=tempv*vec[idx];
            vec[end]=vec[end]/tempv;
            idx++;
        }
        end=end-1;
    }
    int res=0;
    for(int i =0 ; i< n ; i++){
        res+=vec[i];
        cout<<vec[i]<<" ";
    }
    cout<<res<<endl;
}
