a = []
b = []
c = []
d = []
ans = 0
n = int(input())
for _ in range(0,n):
    s,e=map(int,input().split())
    a.append(s)
    b.append(e)
m = int(input())
for _ in range(0,m):
    s,e=map(int,input().split())
    c.append(s)
    d.append(e)
ans = max(ans,max(max(c)-min(b),max(a)-min(d)))
print(ans)