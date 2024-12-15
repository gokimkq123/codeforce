import copy
import math
import queue
import sys
from collections import Counter
import itertools
 
t = int(input())
 
for _ in range(t):
    n = int(input())
    ans = 0
    for i in range(1, n):
        for j in range(1, n):
            if i + j == n:
                ans += 1
 
    print(ans)
