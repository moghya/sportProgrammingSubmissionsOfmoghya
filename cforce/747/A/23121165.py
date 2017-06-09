import math

def solve():
    n = int(input().strip())
    root = math.floor(n**(1/2))
    i = root
    while i > 0:
        if i * math.ceil(n/i) == n:
            print(str(i) + ' ' + str(int(n/i)))
            return 
        i = i - 1
solve()
    
