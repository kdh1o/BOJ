#include <iostream>
#include <cstring>
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)

using namespace std;
const int MAX = 101;

int map[MAX][MAX];
int visited[MAX];

int n, m;

int dfs(int a);
int dfs2(int a);

int main(){
    fastio;
    
    cin>>n>>m;
    
    int a,b;
    for(int i=0; i<m; i++){
        cin>>a>>b;
        map[a][b]=1;
    }
    
    for(int i=1; i<=n; i++){
        memset(visited, false, sizeof(visited));
        int k = dfs(i);
        k += dfs2(i) - 1;
        cout << n-k <<'\n';
    }
    
}

int dfs(int a){
    visited[a] = true;
    
    int cnt = 1;
    for(int i=1; i<=n; i++){
        if(map[a][i] ==1 && !visited[i]){
            cnt+=dfs(i);
        }
    }
    
    return cnt;
}

int dfs2(int a){
    visited[a] = true;
    
    int cnt = 1;
    for(int i=1; i<=n; i++){
        if(map[i][a] ==1 && !visited[i]){
            cnt+=dfs2(i);
        }
    }
    
    return cnt;
}
