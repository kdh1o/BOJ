#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    vector<int> dp(n+1,INT_MAX);
    dp[0]=0;
    
    for(int i=1;i<=i*i;i++)
    {
        int sq=i*i;
        for(int j=sq;j<=n;j++)
        {
            dp[j]=min(dp[j],dp[j-sq]+1);
        }
    }
    
    cout<<dp[n];
    
    return 0;
}
