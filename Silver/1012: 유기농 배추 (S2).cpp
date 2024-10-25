#include <iostream>
#include <vector>

using namespace std;

int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};

void dfs(int x,int y,vector<vector<int>>& field,vector<vector<bool>>& visited) 
{
    visited[x][y]=true;

    for(int i=0;i<4;i++)
    {
        int ax=x+dx[i];
        int ay=y+dy[i];

        int len=field.size();
        if(ax>=0&&ax<len&&ay>=0&&ay<field[0].size())
        {
            if(field[ax][ay]==1&&!visited[ax][ay])
                dfs(ax,ay,field,visited);
        }
    }
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int m,n,k;
        cin>>m>>n>>k;

        vector<vector<int>> field(n,vector<int>(m,0));
        vector<vector<bool>> visited(n,vector<bool>(m,false));

        for(int i=0;i<k;i++)
        {
            int x,y;
            cin>>x>>y;
            field[y][x]=1;
        }

        int cnt=0;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(field[i][j]==1&&!visited[i][j])
                {
                    dfs(i,j,field,visited);
                    cnt++;
                }
            }
        }

        cout<<cnt<<'\n';
    }

    return 0;
}
