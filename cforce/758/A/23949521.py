n = int(input())
a = list(map(int,input().split()))
m = max(a)
ans = 0
for i in a:
    ans = ans + (m-i)
print(ans)