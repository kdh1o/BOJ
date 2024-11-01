#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int bfs(int x,int y);

int graph[100][100];

int n,m;
int main()
{
    cin>>n>>m;
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%1d",&graph[i][j]);
        }
    }
    
    int result=bfs(0,0);
    
    cout<<result;
    
    return 0;
}

int bfs(int x,int y)
{
    queue<pair<int, int>> q;
    q.push({x, y});
    
    while (!q.empty())
    {
        int x=q.front().first;
        int y=q.front().second;
        q.pop();
        
        for(int i=0;i<4;i++)
        {
            int nx=x+dx[i];
            int ny=y+dy[i];
            
            //이동불가
            if (graph[nx][ny]==0)
                continue;
            //공간탈주
            if (nx<0||nx>=n||ny<0||ny>=m)
                continue;
            if (graph[nx][ny]==1)
            {
                graph[nx][ny]=graph[x][y]+1;
                q.push({nx,ny});
            }
        }
    }

    return graph[n-1][m-1];
}

/*https://www.acmicpc.net/problem/2606*/
