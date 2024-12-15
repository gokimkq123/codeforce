import copy
import math
import queue
import sys
from collections import Counter
import itertools
 
t = int(input())
 
for _ in range(t):
    m, a, b, c = map(int , sys.stdin.readline().split())
    ans = 0
 
    ans += min(a, m)
    ans += min(b, m)
 
    storeA = m - a
    storeB = m - b
 
    if storeA >= 0:
        ans += min(storeA, c)
        c -= min(storeA, c)
    if storeB >= 0:
        ans += min(storeB, c)
        c -= min(storeB, c)
 
 
    print(ans)

