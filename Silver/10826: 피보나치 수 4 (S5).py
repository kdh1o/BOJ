n=int(input())

if n==0:
    print(0)
    exit()

dp=[0 for i in range (n+1)]

dp[0]=0
dp[1]=1

for i in range(2, n+1):
    dp[i]=dp[i-1]+dp[i-2]

print(dp[n])

#https://www.acmicpc.net/problem/10826
#c++과 c로 해결시 오버플로우가 걸려 Python3로 해결
