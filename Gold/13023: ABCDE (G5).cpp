#include <iostream>
#include <vector>

using namespace std;

int n,m;
bool arrive=false;
vector<vector <int> > g;
vector<bool> visit;
void dfs(int v,int d);

int main()
{
    cin>>n>>m;
    
    g.resize(n);
    
    visit=vector<bool>(n,false);
    
    for(int i=0;i<m;i++)
    {
    	int a,b;
    	cin>>a>>b;
    	g[a].push_back(b);
    	g[b].push_back(a);
	}
    
    for(int i=0;i<n;i++)
    {
    	dfs(i,1);
	}
	
	if(arrive)
		printf("1");
	else
		printf("0");
    

    return 0;
}

void dfs(int v,int d)
{
	if(d==5||arrive)
	{
		arrive=true;
		return;
	}
	if(visit[v]==true)
	{
		return;
	}
	visit[v]=true;
	for(int i : g[v])
	{
		if(visit[i]==true)
			continue;
		dfs(i,d+1);
	}
	visit[v]=false;
}

/*https://www.acmicpc.net/problem/13023*/
