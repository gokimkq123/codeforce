import sys
 
 
t = int(input())
 
for _ in range(t):
    n, a, b, c = map(int, sys.stdin.readline().split())
 
    Sum = a + b + c
 
    ans =  (3 * int(n / Sum))
 
    d = n % Sum
 
    if d != 0:
        if d - a <= 0:
            ans += 1
        elif d - (a + b) <= 0:
            ans += 2
        elif d - (a + b + c) <= 0:
            ans += 3
 
    print(ans)
