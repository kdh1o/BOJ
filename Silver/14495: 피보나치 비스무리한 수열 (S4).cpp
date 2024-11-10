#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    long long dp[200]={0,1,1,1};
    
    for(int i=3;i<=n;i++)
        dp[i]=dp[i-1]+dp[i-3];
    
    cout<<dp[n];

    return 0;
}

/*https://www.acmicpc.net/problem/14495*/
