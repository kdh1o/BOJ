#include <iostream>
#include <vector>
#include <algorithm>
#define fastio ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)

using namespace std;

int main()
{
    fastio;
    int n;
    cin>>n;
    
    vector<int> honey(n);
    int sum = 0;
    for(int i=0; i<n; i++){
        cin>>honey[i]; //9 9 4 1 4 9 9
        sum+=honey[i];
    }
    
    int maxh = 0;
    
    //통 벌 벌
    int right=honey[n-1];
    for(int i=n-2; i>=1; i--){//i=5
        right += honey[i];
        int a = (sum - honey[n-1] - honey[i]) + (sum - right);
        maxh = max(maxh, a);
    }
    
    //벌 벌 통
    int left=honey[0];
    for(int i=1; i<n-1; i++){
        left += honey[i];
        int a = (sum - honey[0] - honey[i]) + (sum - left);
        maxh = max(maxh, a);
    }
    
    //벌 통 벌
    for(int i = 1; i < n-1; i++) {
        int a = sum - honey[0] - honey[n-1] + honey[i];
        maxh = max(maxh, a);
    }
    
    cout<<maxh;
    
    return 0;
}

/*
1. 통 벌 벌
2. 벌 벌 통
3. 벌 통 벌
https://www.acmicpc.net/problem/21758
*/

