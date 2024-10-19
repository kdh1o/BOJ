#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

 vector<pair<int, int>> arr;

int main()
{
    int n;
    
    cin>>n;
    
    int x,y;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        
        arr.push_back({y,x});
    }
    
    sort(arr.begin(), arr.end());
    
    for (int i = 0; i < n; i++)
    {
		cout << arr[i].second << ' ' << arr[i].first << '\n';
	}
    

    return 0;
}
