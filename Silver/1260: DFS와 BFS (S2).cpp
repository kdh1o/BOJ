#include <iostream>
#include <queue>
#include <vector>
#define MAX 1001

using namespace std;

int n,m,v;
bool visited[MAX];
int map[MAX][MAX];
queue<int> q;

void dfs(int a);
void bfs(int a);

int main()
{
    cin>>n>>m>>v;
    
    int t1,t2;
    for(int i=0;i<m;i++)
    {
        cin>>t1>>t2;
        map[t1][t2]=1;
        map[t2][t1]=1;
    }
    
    for(int i=1;i<=n;i++)
        visited[i]=false;
    
    dfs(v);
    cout<<'\n';
    
    for(int i=1;i<=n;i++)
        visited[i]=false;
    
    bfs(v);
    
    return 0;
}

void dfs(int a)
{
    visited[a]=true;
    
    cout<<a<<' ';
    
    for(int i=1;i<=n;i++)
    {
        if(map[a][i]==1&&visited[i]==false)
            dfs(i);
    }
}

void bfs(int a)
{
    q.push(a);
    visited[a]=true;
    cout<<a<<' ';
    
    while(!q.empty())
    {
        int x=q.front();
        q.pop();
        
        for(int i=1;i<=n;i++)
        {
            if(map[x][i]==1&&visited[i]==false)
            {
                q.push(i);
                visited[i]=true;
                cout<<i<<' ';
            }
        }
    }
}

/*https://www.acmicpc.net/problem/1260*/
