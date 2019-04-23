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
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i =0 ; i< n ; i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int maxv=a[n-1],res=0;
    for(int j =n-2 ;j>=0; j--){
        if(a[j]%maxv!=0){
            res=a[j];
            break;
        }
    }
    cout<<res<<endl;
    return 0;
}
