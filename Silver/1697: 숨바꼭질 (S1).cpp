#include <iostream>
#include <queue>

using namespace std;

int visited[100001];
int n, k;

void bfs(int a);

int main()
{
    cin>>n>>k;
    bfs(n);

    return 0;
}

void bfs(int a){
    visited[a]=true;
    
    queue<pair<int,int>> q;
    q.push({a,0});
    
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        
        if(x==k){
            cout<< y;
            break;
        }
        
        if(x+1>=0 && x+1<=100000){
            if(!visited[x+1]){
                visited[x+1] = true;
                q.push({x+1, y+1});
            }
        }
        
        if(x-1>=0 && x-1<=100000){
            if(!visited[x-1]){
                visited[x-1] = true;
                q.push({x-1, y+1});
            }
        }
        
        if(x*2>=0 && x*2<=100000){
            if(!visited[x*2]){
                visited[2*x] = true;
                q.push({x*2, y+1});
            }
        }
    }
    
}
