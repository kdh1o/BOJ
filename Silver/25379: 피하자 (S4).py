import sys
input = sys.stdin.readline

n = int(input())
arr = list(map(int, input().split()))

odd = 0
even = 0
orr = 0
er = 0

for x in arr:
    if x%2==0:
        even+=1
        orr += odd
    else:
        odd+=1
        er += even

print(min(orr, er))
