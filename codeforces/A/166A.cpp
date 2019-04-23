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
bool cmp(pair<int,int> a ,pair<int,int> b){
    if(a.first>b.first){
        return true;
    }
    if(a.first==b.first){
        if(a.second<b.second)return true;
    }

    return false;
}

int main(){
    int n ,k;
    cin>>n>>k;
    vector<pair<int,int> > vec(n);
    map<pair<int,int>,int>mp;
    for(int i =0 ; i< n ; i++){

        cin>>vec[i].first>>vec[i].second;
        mp[{vec[i].first,vec[i].second}]++;
    }
    sort(vec.begin(),vec.end(),cmp );
//    cout<<endl<<endl;
//    for(int i =0 ; i< n ; i++){
//        cout<<vec[i].first<<" "<<vec[i].second<<endl;
//    }
    int x=vec[k-1].first,y=vec[k-1].second;
    cout<<mp[{x,y}]<<endl;
    return 0;
}
