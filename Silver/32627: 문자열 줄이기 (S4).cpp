#include <iostream>
#include <vector>
#include <queue>

using namespace std;

priority_queue<pair<char, int>, vector<pair<char, int>>, greater<pair<char, int>>> pq;
int main()
{
    int n,m;
    cin>>n>>m;
    
    string s;
    cin>>s;

    for(int i=0;i<n;i++)
        pq.push({s[i],i});

    vector<bool> removed(n, false);

    int rcnt=0;
    
    while(rcnt<m)
    {
        pair<char, int>cur=pq.top();
        pq.pop();
        
        if (removed[cur.second])
            continue;
        
        removed[cur.second]=true;
        rcnt++;
    }

    string result="";
    for(int i=0;i<n;i++)
    {
        if (!removed[i])
            result+=s[i];
    }

    cout<<result;
    
    return 0;
}
