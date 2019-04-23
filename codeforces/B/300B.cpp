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
bool visit[50];
int graph[50][50];
void dfs(int s,int n,vector<int> & res ){
    visit[s]=true;
    res.push_back(s);

    for(int i = 0 ; i< n ; i++){
        if(graph[s][i]==true && visit[i]==false){
            dfs(i,n,res);
        }
    }

}
int main(){
    int n,e,x,y;
    cin>>n>>e;
    for(int i =0 ; i<e; i++){
        cin>>x>>y;
        graph[x-1][y-1]=1;
    }

    vector<int>res1;
    vector< pair<int,int> >res2;
    vector<vector<int>>vec;
    for(int i =0 ; i < n ; i++){
        if(visit[i]==false){
            vector<int>res;
            dfs(i,n,res);
            if(res.size()>3){
                cout<<-1<<endl;
                return 0;
            }
            else if(res.size()==3){
            vec.push_back(res);
            }
            else if(res.size()==2){
                res2.push_back({res[0],res[1]});
            }
            else if(res.size()==1){
                res1.push_back(res[0]);
            }
        }
    }
//    cout<<res2.size()<<" "<<res1.size()<<endl;
//    res2.size()-res1.size())<<endl;
    if(res2.size()>res1.size() || (int(res2.size())-int(res1.size()))%3!=0){
        cout<<-1<<endl;
        return 0;
    }

    int k =0;
    for(int i =0 ; i< res2.size() ; i++){
        vector<int>temp;
        temp.push_back(res2[i].first);
        temp.push_back(res2[i].second);
        temp.push_back(res1[k]);
        vec.push_back(temp);
        k++;
    }

    for( ; k< res1.size() ;){
        vector<int>temp;
        temp.push_back(res1[k]);
        k++;
        temp.push_back(res1[k]);
        k++;
        temp.push_back(res1[k]);
        k++;
        vec.push_back(temp);
    }
    for(auto x: vec){
        for(auto p : x){
            cout<<p+1<<" ";
        }
        cout<<endl;
    }
    return 0;
}
