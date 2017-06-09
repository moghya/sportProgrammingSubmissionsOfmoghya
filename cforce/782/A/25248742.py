n = int(input())
a = list(map(int,input().split()))
table = [0]*(n+1)
ans= 0
cnt = 0
for _ in a:
    if table[_] :
        cnt = cnt  - 1
        table[_] = 0
    else:
        cnt = cnt + 1
        table[_] = 1
    ans = max(ans,cnt)
    
print(ans)