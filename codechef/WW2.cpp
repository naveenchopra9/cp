// 𝑂(𝑙𝑜𝑔𝑁∗𝑀3) .
#include "/Users/naveen/stdc++.h"
//#include<bits/stdc++.h>
using namespace std;
#define MAXV 2147483647
#define MINV -2147483647
#define SYC ios_base::sync_with_stdio(0); cin.tie(0)
#define FR freopen("/Users/naveen/Documents/online_code/input.txt","r",stdin)
#define FW freopen("/Users/naveen/Documents/online_code/output.txt","w",stdout)
#define REP(i,n) for (int i = 1; i <= n; i++)
typedef long long ll;
typedef vector<vector<ll> > matrix;
const ll MOD = 1000000007;
 int K = 30;

// computes A * B
matrix mul(matrix A, matrix B)
{
    matrix C(K+1, vector<ll>(K+1));
    REP(i, K) REP(j, K) REP(k, K)
    C[i][j] = (C[i][j] + A[i][k] * B[k][j]) % MOD;
    return C;
}

// computes A ^ p

matrix pow_mat(matrix A, int p)
{
    if (p == 1)
        return A;
    if (p % 2)
        return mul(A, pow_mat(A, p-1));
    matrix X = pow_mat(A, p/2);
    return mul(X, X);
}

// returns the N-th term of Fibonacci sequence
long long fib(int N)
{
    // create vector F1
    vector<ll> F(K+1);
    F[1] = 1;
    F[2] = 1;

    // create matrix T
    matrix T(K+1, vector<ll>(K+1));
    T[1][1] = 0; T[1][2] = 1;
    T[2][1] = 1; T[2][2] = 1;

    // raise T to the (N-1)th power
    if (N == 1)
        return 1;
    T = pow_mat(T, N-1);

    // the answer is the first row of T . F1
    ll res = 0;
    REP(i, K)
    res = (res + T[1][i] * F[i]) % MOD;
    return res;
}
int main(){
    int t;
    cin>>t;
    while(t--){
    int n,m ;
    cin>>n>>m;
    matrix  odd(m+1,vector<ll>(m+1)),even(m+1,vector<ll>(m+1));
    for(int i =1 ; i <=m ; i++){
        if(i+1<=m)
            even[i][i+1]=1;
        if(i!=1)
            even[i][i-1]=1;

        odd[i][i]=1;

        if(i!=1)
            odd[i][i-1]=1;
        if(i+1<=m)
            odd[i][i+1]=1;
    }
    K=m;
    matrix ans(m+1,vector<ll>(m+1));
    if(n==1){
        cout<<m<<endl;
        continue;
    }
    else if(n==2){
        ans=even;
//        for(auto x: ans){
//
//            for(auto p: x){
//                cout<<p<<" ";
//            }
//            cout<<endl;
//        }
    }
    else {
        matrix T(m+1,vector<ll>(m+1));
        T=mul(odd, even);
        ans=pow_mat(T, (n-1)/2);
        if((n-1)&1)ans=mul(ans, even);
    }
    ll res=0;
    for(int i =1 ; i<= m ; i++){

        for(int j =1 ; j<=m; j++){
            res=(res+ans[i][j])%MOD;
        }
    }
    cout<<res<<endl;
//    cout<<fib(n)<<endl;
    }
    return 0;
}
