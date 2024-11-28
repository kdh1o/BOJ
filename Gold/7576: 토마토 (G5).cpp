#include <iostream>
#include <queue>
#include <algorithm>
#define MAX 1001
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
using namespace std;

//변수 선언
int visited[MAX][MAX];
queue<pair<int,int>> q;

int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};

int arr[MAX][MAX]={0, };
int cnt=0;
int n,m;

//함수 선언
void bfs();
void set();
void solve();

int main()
{
    fastio;
    
    cin>>m>>n;
   
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>arr[i][j];
   
    bfs();
   
    solve();
}

void bfs()
{
    //큐 초기화
    set();
    
    while(!q.empty())
    {
        int a=q.front().first;
        int b=q.front().second;
       
        q.pop();
        for(int i=0;i<4;i++)
        {
            int nx=a+dx[i];
            int ny=b+dy[i];
           
            if(nx<0 || ny<0 || nx>=n || ny>=m)
                continue;
            if(arr[nx][ny]==0 && !visited[nx][ny])
            {
                visited[nx][ny]=visited[a][b]+1;
                q.push(make_pair(nx,ny));
            }
        }
    }
}

void set()
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]==1)
            {
                q.push(make_pair(i,j));
                visited[i][j]=1;
            }
        }
    }
}

void solve()
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(visited[i][j]==0 && arr[i][j]==0)
            {
                cout<< -1;
                exit(0);
            }
            cnt=max(cnt, visited[i][j]);
        }
    }
    
    cout<<cnt-1;
}
