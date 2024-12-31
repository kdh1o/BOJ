#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    vector<long long> arr(n);
    for(int i=0; i<n; i++)
        cin>>arr[i];
    
    vector<long long> dp(n);
    dp[0] = arr[0];
    
    for (int i=1; i<n; i++){
        dp[i] = min(dp[i-1] + 1, arr[i]);
    }
    
    long long result = 0;
    for (int i = 0; i < n; ++i) {
        result += dp[i];
    }
    
    cout << result;
    
    return 0;
}
