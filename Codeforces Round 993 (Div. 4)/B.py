import copy
import math
import queue
import sys
from collections import Counter
import itertools
 
t = int(input())
 
for _ in range(t):
    a = input()
    a = a[::-1]
    ans = ''
    for i in a:
        if i == 'p': ans += 'q'
        elif i == 'q': ans += 'p'
        else: ans += i
 
    print(ans)
