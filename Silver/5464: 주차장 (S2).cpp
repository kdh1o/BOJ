#include <iostream>
#include <queue>
#include <vector>
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)

using namespace std;

priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;//번호 가격

int main()
{
    fastio;
    int n,m;
    cin>>n>>m;
    
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        pq.push(make_pair(i+1,a));
    }
    
    vector<int> weight(m+1, 0);//무게
    for(int i=1;i<=m;i++)
        cin>>weight[i];
    
    vector<pair<int,int>>park(m+1);
    queue<int> wait;
    int len = 2*m;
    
    int inst;
    int result=0;
    for(int i=0;i<len;i++){
        cin>>inst;
        
        if(inst<0){
            inst = -inst;
            result+=park[inst].second*weight[inst];
            pq.push(park[inst]);
            
            if(!wait.empty()){
                int t=wait.front();
                wait.pop();
                park[t]=pq.top();
                pq.pop();
            }
        }
        
        else{
            if(pq.empty())
                wait.push(inst);
            else{
                park[inst]=pq.top();
                pq.pop();
            }
        }
    }
    
    cout<<result;
    
    return 0;
}
