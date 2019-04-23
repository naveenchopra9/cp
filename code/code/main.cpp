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

vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
    int sum=0;
    int x=0 , y=0;
    vector<int>res;
    while(sum<= matrix.size()+matrix[0].size()){
        
        if(x==0){
            while(y!=0){
                res.push_back(matrix[x][y]);
                x++;
                y--;
            }
            x++;
        }
        else{
            while(x!=0){
                res.push_back(matrix[x][y]);
                x--;
                y++;
            }
            y++;
        }
        sum++;
    }
    return res;
}

int main(){
    vector<vector<int>> a{{1,2,3},{4,5,6},{7,8,9}};
    
    vector<int>res=findDiagonalOrder(a);
    for(auto x  :res){
        cout<<x<<endl;
    }
    return 0;
}
