import sys
 
 
t = int(input())
 
for _ in range(t):
    n, m, k = map(int, sys.stdin.readline().split())
 
    a = list(map(int, sys.stdin.readline().split()))
    q = list(map(int, sys.stdin.readline().split()))
    ans = []
    cnt = [0] * (n + 1)
 
 
    for i in range(k):
        cnt[q[i]] = 1
 
    for i in range(n):
        if cnt[i + 1] == 0:
            ans.append(i + 1)
 
 
    if len(ans) >= 2:
        print('0' * m)
    elif len(ans) == 0:
        print('1' * m)
    else:
        for i in range(m):
            if i == ans[0] - 1:
                print('1', end='')
            else:
               print('0', end='')
        print()
