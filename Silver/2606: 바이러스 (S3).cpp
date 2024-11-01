#include <iostream>
#include <queue>

using namespace std;

int n,m;
int cnt=0;

int graph[101][101]={0,};
bool visited[101]={0,};

queue<int> q;

void bfs(int x);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    
    cin>>n>>m;
    
    int st,end;
    for(int i=0;i<m;i++)
    {
        cin>>st>>end;
        graph[st][end]=1;
        graph[end][st]=1;
    }
    bfs(1);
    
    cout<<cnt;
    
    return 0;
}

void bfs(int x)
{
    visited[x]=true;
    q.push(x);
    
    int t=0;
    while(!q.empty())
    {
        x=q.front();
        q.pop();
        
        for(int i=1;i<=n;i++)
        {
            if(graph[x][i]==1&&visited[i]==0)
            {
                visited[i]=true;
                q.push(i);
                cnt++;
            }
        }
    }
}

/*https://www.acmicpc.net/problem/2606*/
