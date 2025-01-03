#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<pair<int,int>>arr;

priority_queue<int,vector<int>,greater<int>> pq;

int main()
{
    int n;
    
    cin>>n;
    
    int a,b;
    
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        arr.push_back({a,b});
    }
    
    sort(arr.begin(),arr.end());
    
    int len=arr.size();
    
    pq.push(arr[0].second);
    for(int i=1;i<len;i++)
    {
        if(arr[i].first>=pq.top())
        {
            pq.pop();
            pq.push(arr[i].second);
        }
        else
            pq.push(arr[i].second);
    }
    
    cout<<pq.size();

    return 0;
}

/*https://www.acmicpc.net/problem/11000*/
