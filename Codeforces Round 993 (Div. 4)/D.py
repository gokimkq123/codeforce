import sys

t = int(sys.stdin.readline())

for _ in range(t):
    n = int(sys.stdin.readline())

    a = list(map(int, sys.stdin.readline().split()))
    ans = []
    temp = []
    temp2 = [0] * (n + 1)

    for i in range(n):
        temp2[a[i]] = 1

    for i in range(n):
        if temp2[i + 1] == 0:
            temp.append(i + 1)

    for i in range(n):
        if temp2[a[i]] == 1:
            ans.append(a[i])
            temp2[a[i]] = 0
        elif temp2[a[i]] == 0:
            ans.append(temp.pop())

    print(*ans)
