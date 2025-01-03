#include<iostream>
#include<algorithm>

using namespace std;

int dp[10000001]={0,};

int main()
{
    int n;
    
    cin>>n;

    dp[2] = 1;
    dp[3] = 1;

    for(int i=4; i<=n; i++)
    {
        dp[i] = dp[i-1] + 1;
        if(i%2==0)
            dp[i] = min(dp[i], dp[i/2]+1);
        if(i%3==0)
            dp[i] = min(dp[i],dp[i/3]+1);
    }
    
    cout<<dp[n];
    
    return 0;
}

/*https://www.acmicpc.net/problem/1463*/
