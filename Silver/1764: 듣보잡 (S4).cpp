#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
    int n, m;
    
    map<string, bool> arr;
    
    cin >> n >> m;
    
    string human;
    for (int i = 0; i < n; i++)
    {
        cin >> human;
        arr.insert(make_pair(human, true)); 
    }
    
    vector<string> result;
    
    int cnt=0;
    for (int i = 0; i < m;i++)
    {
        cin >> human;
        if(arr[human])
        {
            result.push_back(human);
            cnt++;
        }
    }
    
    cout << cnt << '\n';
    
    sort(result.begin(), result.end());
    
    int len = result.size(); 
    
    for (int i = 0; i < result.size(); i++)
        cout << result[i] << '\n';
    
        return 0;
}

/*https://www.acmicpc.net/problem/1764*/
