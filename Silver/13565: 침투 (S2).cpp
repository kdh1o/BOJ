#include <iostream>
#include <vector>
#define MAX 1001

using namespace std;

int n,m;

bool visited[MAX][MAX]= {0,};
int map[MAX][MAX]= {0,};

int dx[4]= {0,0,-1,1};
int dy[4]= {-1,1,0,0};

void dfs(int x,int y);

int main()
{
	cin>>m>>n;

	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			scanf("%1d",&map[i][j]);
		}
	}
    
    for(int i=0;i<n;i++)
	{
	    if(visited[0][i])
	        continue;
	    dfs(0,i);
	}

	for(int i=0;i<n;i++)
	{
	    if(visited[m-1][i])
	    {
	        cout<<"YES";
	        return 0;
	    }
	}

	cout<<"NO";

}

void dfs(int x,int y)
{
	visited[x][y]=true;

	for(int i=0; i<4; i++)
	{
		int nx=x+dx[i];
		int ny=y+dy[i];

		if(nx<0||ny<0||nx>=m||ny>=n)
			continue;
		if(map[nx][ny]==0&&!visited[nx][ny])
		{
			visited[nx][ny]=1;
			dfs(nx,ny);
		}
	}
}

/*https://www.acmicpc.net/problem/13565*/
