import sys
 
 
t = int(input())
 
for _ in range(t):
    n = int(sys.stdin.readline())
    a = list(map(int, sys.stdin.readline().split()))
    b = list(map(int, sys.stdin.readline().split()))
 
    ans = 0
 
    for i in range(n):
 
        if i == n - 1:
            ans += a[i]
            continue
 
        if a[i] - b[i + 1] < 0:
            continue
 
        ans += a[i] - b[i + 1]
 
    print(ans)
