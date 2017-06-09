def solve():
    l = []
    n = int(input())
    maybe=0
    a,b=map(int,input().split())
    if abs(a-b) > 0:
        print('rated')
        return
    l.append((a,b))
    for i in range(1,n):
        a,b=map(int,input().split())
        l.append((a,b))
        if abs(a-b) > 0:
            print('rated')
            return
        if l[i-1][0] < l[i][0]:
            maybe = 1
    if not maybe:
        print('maybe')
    else:
        print('unrated')
        
solve()