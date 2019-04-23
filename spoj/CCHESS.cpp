
#include "/Users/naveen/stdc++.h"
//#include<bits/stdc++.h>
using namespace std;
#define MAXV 2147483647
#define MINV -2147483647
#define SYC ios_base::sync_with_stdio(0); cin.tie(0)
#define FR freopen("/Users/naveen/Documents/online_code/input.txt","r",stdin)
#define FW freopen("/Users/naveen/Documents/online_code/output.txt","w",stdout)
#define M 1000000007
int dp[9][9],a,b,c,d;
int x[8] = { 2, 1, -1, -2, -2, -1, 1, 2 };
int y[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };
bool isvalid(int x1 , int y1){
    return (x1>=0 && y1>=0 && x1<=7 && y1<=7);
}

int find_sol(){
    bool visit[9][9];

    memset(visit,0,sizeof(visit));
    for(int i =0 ; i< 9 ; i++){
        for(int j =0 ; j< 9 ; j++){
            dp[i][j]=MAXV;
        }
    }
    multiset<pair< int,pair<int, int> > > q;
    q.insert({0,{a,b}});
//    visit[a][b]=true;
    while(!q.empty()){
        pair< int,pair<int, int> > temp=*q.begin();
        int tempx=temp.second.first,tempy=temp.second.second,w=temp.first;
        q.erase(q.begin());
        if(tempx==c && tempy==d){
            return w;
        }

        if(visit[tempx][tempy])continue;

        visit[tempx][tempy]=true;

        for(int i = 0 ; i< 8 ;  i++){
            int xx =tempx+x[i],yy=tempy+y[i];
            if(isvalid(xx, yy) && !visit[xx][yy] && dp[xx][yy]>((xx*tempx +tempy*yy)+w)){
                q.insert({(xx*tempx +tempy*yy)+w,{xx,yy}});
                dp[xx][yy]=((xx*tempx +tempy*yy)+w);
            }
        }
    }

    return -1;
}
int main(){
    while(cin>>a>>b>>c>>d){
        cout<<find_sol()<<endl;
    }
    return 0;
}
