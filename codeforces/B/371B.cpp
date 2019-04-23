#include <bits/stdc++.h>
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
    int a,b;
    cin>>a>>b;
    int aa[10]={0},bb[10]={0};

    while(a%2==0){
        aa[2]++;
        a/=2;
    }

    while(a%3==0){
        aa[3]++;
        a/=3;
    }

    while(a%5==0){
        aa[5]++;
        a/=5;
    }

    aa[0]=a;

    while(b%2==0){
        bb[2]++;
        b/=2;
    }
    while(b%3==0){
        bb[3]++;
        b/=3;
    }
    while(b%5==0){
        bb[5]++;
        b/=5;
    }
    bb[0]=b;
//    cout<<a<<" "<<b<<endl;
    if(a!=b){
        cout<<"-1"<<endl;
        return 0;
    }
    cout<<(abs(aa[2]-bb[2])+abs(aa[3]-bb[3])+abs(aa[5]-bb[5]))<<endl;
    return 0;
}
