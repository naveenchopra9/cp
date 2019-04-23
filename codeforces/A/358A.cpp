#include "/Users/naveen/stdc++.h"
//#include <bits/stdc++.h>
using namespace std;
#define MAXV 2147483647
#define MINV -2147483647
#define SYC ios_base::sync_with_stdio(0); cin.tie(0)
#define ll long long int
#define M 1000000007
#define FR freopen("/Users/naveen/Documents/online_code/input.txt","r",stdin)
#define FW freopen("/Users/naveen/Documents/online_code/output.txt","w",stdout)

bool testOverlap(int x1, int x2, int y1, int y2) {
    return (x1 > y1 && x1 < y2) ||
    (x2 > y1 && x2 < y2) ||
    (y1 > x1 && y1 < x2) ||
    (y2 > x1 && y2 < x2);
}

int main(){
    int n;

    cin>>n;

    int a[n];

    for(int i =0 ; i< n ; i++){
        cin>>a[i];
    }

    vector<pair<int,int>>vec;

    for(int i =1  ;i< n ; i++){
        if(a[i-1]>a[i]){
            vec.push_back({a[i],a[i-1]});
        }
        else{
            vec.push_back({a[i-1],a[i]});
        }
    }
    sort(vec.begin(),vec.end());
//    for(auto x:vec){
//        cout<<x.first<<" "<<x.second<<endl;
//    }
//    cout<<endl<<endl;
    bool flag=false;
    for(int i = 0 ;i< vec.size() ; i++){

        for(int j =0 ; j< vec.size() ; j++){
            if(i!=j){
                if((vec[i].first<=vec[j].first && vec[j].second<=vec[i].second)||
                   (vec[j].first<=vec[i].first && vec[i].second<=vec[j].second)){

                }
                else if(!testOverlap(vec[i].second,vec[j].first,vec[j].first,vec[j].second)){
                }
                else{
                    flag=true;
//                    cout<<i<<" "<<j<<endl;
                    break;
                }
            }
            if(flag){
                cout<<"yes"<<endl;
                return 0;
            }
        }
    }
    cout<<"no"<<endl;
    return 0;
}
