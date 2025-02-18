#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int n;
    
    cin>>n;
    
    vector<pair<int,int>> arr;
    
    for(int i=0;i<n;i++)
    {
        int st,end;
        
        cin>>end>>st;
        
        arr.push_back(make_pair(st,end));
    }
    
    sort(arr.begin(),arr.end());
 
    int cnt = 1;
    int stand = arr[0].first;
    
    for (int i = 1; i <= n; i++)
    {
        if (arr[i].second >=stand)
        {
            cnt++;
            stand = arr[i].first;
        }
    }

    cout<<cnt;
    
    return 0;
}

/*https://www.acmicpc.net/problem/1931*/
