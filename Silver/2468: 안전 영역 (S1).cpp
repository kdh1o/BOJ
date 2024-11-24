#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;
#define MAX 101

//변수 정의
int arr[MAX][MAX]={0, };
int map[MAX][MAX]={0, };
int visited[MAX][MAX]={0, };
vector<int>result;
int n;
int cnt=0;
int maxheight= -1;
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};

//함수 정의
void input();
void mapset(int i);
void reset();
void bfs(int x, int y);
int solution();
void output();

int main()//MAIN
{
    input();
    
    for(int h=1; h<=maxheight; h++)
    {
        mapset(h);
        
        result.push_back(solution());
        
        reset();
    }
    
    output();

    return 0;
}

void input()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    cin>>n;
    
    for(int i=0; i<n ;i++)
    {
        for(int j=0; j<n ;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]>maxheight)
                maxheight=arr[i][j];
        }
    }
}

void mapset(int i)
{
    for(int a=0; a<n; a++)
    {
        for(int b=0 ;b<n ;b++)
        {
            if(arr[a][b]<i)
                map[a][b]=0;
            else
                map[a][b]=1;
        }
    }
}

void reset()
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            map[i][j]=0;
            visited[i][j]=0;
        }
    }
    cnt=0;
}

int solution()
{
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (map[i][j]==1 && !visited[i][j])
            {
                bfs(i, j);
                cnt++;
            }
        }
    }
    
    return cnt;
}

void output()
{
    sort(result.begin(),result.end());
    
    int len=result.size();
    cout<<result[len-1];
}

void bfs(int x, int y)
{
    queue<pair<int,int>> q;
    visited[x][y]=true;
    q.push(make_pair(x,y));
    
    while(!q.empty())
    {
        int a=q.front().first;
        int b=q.front().second;
        q.pop();
        
        for(int i=0;i<4;i++)
        {
            int nx=a+dx[i];
            int ny=b+dy[i];
            
            if(nx<0 || ny<0 || nx>=n || ny>=n)
                continue;
            if(map[nx][ny]>0 && !visited[nx][ny])
            {
                visited[nx][ny]=true;
                q.push(make_pair(nx,ny));
            }
        }
    }
}
