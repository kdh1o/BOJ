#include <iostream>
using namespace std;
#define MAX 101

void input();
void dynamicp();
void output();
int n;
long long dp[MAX][MAX]={0,};
long long arr[MAX][MAX]={0,};


int main()
{
    input();
    dynamicp();
    output();
    return 0;
}

void input()
{
    cin>>n;
    
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>arr[i][j];
    
    dp[0][0]=1;
}

void dynamicp()
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            int ins=arr[i][j];
            if(i+ins<n && i!=n-1)
                dp[i+ins][j]+=dp[i][j];
            if(j+ins<n && j!=n-1)
                dp[i][j+ins]+=dp[i][j];
        }
    }
}

void output()
{
    int outc=n-1;
    cout<<dp[outc][outc];
}
