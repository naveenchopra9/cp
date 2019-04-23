#include "/Users/naveen/stdc++.h"
//#include <bits/stdc++.h>
using namespace std;
#define MAXV 2147483647
#define MINV -2147483647
#define SYC ios_base::sync_with_stdio(0); cin.tie(0)
#define ll unsigned long long int
#define For(i,n) for(int i =0 ; i< n ; i++)
#define M 1000000007
#define FR freopen("/Users/naveen/Documents/online_code/input.txt","r",stdin)
#define FW freopen("/Users/naveen/Documents/online_code/output.txt","w",stdout)
int a[100000+5];
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int aa=max((3*a)/10,a-((a/250)*c));
    int bb=max((3*b)/10,b-((b/250)*d));
    if(aa==bb)cout<<"Tie"<<endl;
    else if(aa<bb){
        cout<<"Vasya"<<endl;
    }
    else{
        cout<<"Misha"<<endl;
    }
    return 0;
}
