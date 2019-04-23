#include <cstdio>
#include <algorithm>
using namespace std;
int column[1001],row[1001];
int g[1001][1001];
int main(){
    int n, m , k;
    scanf("%d%d%d", &n, &m, &k);
    for(int i =0 ; i< n ; i++){
        row[i]=i;
    }
    for(int i =0 ; i< m ; i++){
        column[i]=i;
    }

    for(int i =0 ; i< n ; i++){
        for(int j =0 ; j< m ; j++){
            scanf("%d",&g[i][j]);
        }
    }
    for(int i =0 ; i< k ; i++){
        int x,y;
        char si[2];
        scanf("%s%d%d", si, &x, &y);
        if(si[0]=='c'){
            swap(column[x-1],column[y-1]);
        }
        else if(si[0]=='r'){
            swap(row[x-1],row[y-1]);
        }
        else if(si[0]=='g'){
            printf("%d\n",g[row[x-1]][column[y-1]]);
//            cout<<g[row[x-1]][column[y-1]]<<endl;
        }
    }
    //    for(int i =0 ; i< m ; i++){
    //        cout<<column[i];
    //    }
    return 0;
}
