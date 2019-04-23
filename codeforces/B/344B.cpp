#include "/Users/naveen/stdc++.h"
//#include <bits/stdc++.h>
using namespace std;
#define MAXV 2147483647
#define MINV -2147483647
#define SYC ios_base::sync_with_stdio(0); cin.tie(0)
#define rep(i,n) for(i=0;i<n;i++)
#define ll long long int
#define elif else if
#define pii pair<int,int>
#define mp make_pair
#define pb push_back
#define M 1000000007
#define FR freopen("/Users/naveen/Documents/online_code/input.txt","r",stdin)
#define FW freopen("/Users/naveen/Documents/online_code/output.txt","w",stdout)

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if((a+b+c)%2!=0){
        cout<<"Impossible"<<endl;
        return 0;
    }
    else{
        if((a-b+c)%2!=0 || (a+b-c)%2!=0 || (-a+b+c)%2!=0){
            cout<<"Impossible"<<endl;
            return 0;
        }
        int x=(a+b-c)/2;
        int y=(b+c-a)/2;
        int z=(a+c-b)/2;

        if(x<0 || y< 0 || z<0){
            cout<<"Impossible"<<endl;
            return 0;

        }
        cout<<x<<" "<<y<<" "<<z<<endl;
    }
    return 0;
}
