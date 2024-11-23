#include <iostream>
#include <vector>

using namespace std;

//변수 정의 
int k;
int s=0;
vector<int>weight;
vector<bool>visited;

//함수 정의
void input();
void dfs(int depth, int n);
void solution();

int main()
{
    input();
    solution();
    
    return 0;
}

void input()
{
    cin >> k;
    weight.resize(k);
    
    for(int i = 0; i < k; i++)
    {
        cin >> weight[i];
        s += weight[i];
    }
    visited.resize(s+1,false);
}

void dfs(int depth, int n)
{
    //추를 모두 탐색 완료
    if(depth==k)
    {
        if(0<n && n<=s)
            visited[n]=true;
        return;
    }
    
    int right = n + weight[depth];  // depth + 1을 depth로 수정
    int left = n - weight[depth];   // depth + 1을 depth로 수정
    int non = n;
    
    dfs(depth+1,non); //추를 안놓음
    dfs(depth+1,right); //오른쪽에 추 놓기
    dfs(depth+1,left); //왼쪽에 추 놓기
}
/*
경우의 수:
1.추를 놓지 않는다.
2.오른쪽에 추를 놓는다.	
3.왼쪽에 추를 놓는다.
*/

void solution()
{
    dfs(0,0);
    
    int cnt=0;
    for(int i=1; i<=s; i++)
    {
        if(!visited[i])
            cnt++;
    }
    
    cout<<cnt;
}
