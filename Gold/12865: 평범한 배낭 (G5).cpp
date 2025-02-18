#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, k;
    cin>>n>>k;

    vector<int> w(n);
    vector<int> v(n);
    
    for (int i = 0; i < n; i++)
        cin>>w[i]>>v[i];
    

    vector<int>dp(k+1, 0);

    for (int i=0;i<n;i++)
    {
        for (int j=k;j>=w[i];j--)
            dp[j]=max(dp[j],dp[j-w[i]]+v[i]);//max를 안씀 
    }

    cout<<dp[k];

    return 0;
}

/*https://www.acmicpc.net/problem/12865*/
