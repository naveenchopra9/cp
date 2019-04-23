
# sinclude "/Users/naveen/stdc++.h"
//#include<bits/stdc++.h>
using namespace std;
#define MAXV 2147483647
#define MINV -2147483647
#define SYC ios_base::sync_with_stdio(0); cin.tie(0)
#define FR freopen("/Users/naveen/Documents/online_code/input.txt","r",stdin)
#define FW freopen("/Users/naveen/Documents/online_code/output.txt","w",stdout)
#define M 1000000007
int a,b,c,d;
int x[8] = { 2, 1, -1, -2, -2, -1, 1, 2 };
int y[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };

bool isvalid(int x1 , int y1){
    return (x1>=0 && y1>=0 && x1<=7 && y1<=7);
}

int find_sol(){
    bool visit[9][9];
    memset(visit,0,sizeof(visit));
    queue<pair< int,pair<int, int> > > q;
    q.push({0,{a,b}});
    visit[a][b]=true;

    while(!q.empty()){
        pair< int,pair<int, int> > temp=q.front();

        int tempx=temp.second.first,tempy=temp.second.second,w=temp.first;
        q.pop();

        if(tempx==c && tempy==d){
            return w;
        }

        for(int i = 0 ; i< 8 ;  i++){
            int xx =tempx+x[i],yy=tempy+y[i];
            if(isvalid(xx, yy) && !visit[xx][yy] ){
                q.push({1+w,{xx,yy}});
                visit[xx][yy]=true;
            }
        }
    }

    return -1;
}
int main(){
    int t;
    cin>>t;
    string str1,str2;
    cin.ignore();
    while(t--){
        cin>>str1>>str2;
//        cout<<str<<endl;
        a=str1[0]-'a';
        b=str1[1]-'0'-1;
        c=str2[0]-'a';
        d=str2[1]-'0'-1;
//        cout<<a<<b<<c<<d<<endl;
        cout<<find_sol()<<endl;
    }
    return 0;
}
