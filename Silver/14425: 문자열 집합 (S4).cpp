#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    
    vector<string> arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    sort(arr.begin(),arr.end());
    
    int cnt=0;
    string str;
    
    for(int i=0;i<m;i++)
    {
        cin>>str;
        if(binary_search(arr.begin(),arr.end(),str))
            cnt++;
    }
    
    cout<<cnt;

    return 0;
}

/*https://www.acmicpc.net/problem/14425*/
//간단한 이분 탐색 문제
