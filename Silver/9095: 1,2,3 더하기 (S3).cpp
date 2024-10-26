#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    
    cin>>n;
    
    int dp[12]={0,};
    
    dp[1]=1;
    dp[2]=2;
    dp[3]=4;
    
    for(int i=4;i<12;i++)
        dp[i]=dp[i-3]+dp[i-2]+dp[i-1];
        
    int t;
    
    for(int i=0;i<n;i++)
    {
        cin>>t;
        cout<<dp[t]<<'\n';
    }

    return 0;
}
/*
1>1
2>(1,1)(2)>>2
3>(1,1,1)(2,1)(1,2)(3)>>4
4>(1,1,1,1)(2,1,1)(1,2,1)(1,1,2)(2,2)(1,3)(3,1)>>7
5>(1,1,1,1,1)(1,1,1,2)(2,1,1,1)(1,2,1,1)(1,1,2,1)(1,1,3)(3,1,1)(1,3,1)(2,2,1)(1,2,2)(2,1,2)(2,3)(3,2)>>13

엇 점화식이 보인다!!

dp[n]=dp[n-3]+dp[n-2]+dp[n-1];

이제 코드를 짜보자!
*/

/*https://www.acmicpc.net/problem/9095*/
