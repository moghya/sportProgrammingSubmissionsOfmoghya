n = int(input())
adata = {
    1:0,
    2:0,
    3:0,
    4:0,
    5:0
}
bdata= {
    1:0,
    2:0,
    3:0,
    4:0,
    5:0
}

a = list(map(int,input().split()))
for x in a:
    adata[x] = adata[x] + 1
b = list(map(int,input().split()))
for x in b:
    bdata[x] = bdata[x] + 1
ans = 0
ans = ans + abs(adata[1]-bdata[1])
ans = ans + abs(adata[2]-bdata[2])
ans = ans + abs(adata[3]-bdata[3])
ans = ans + abs(adata[4]-bdata[4])
ans = ans + abs(adata[5]-bdata[5])
ans = ans//4
if (adata[1]+bdata[1])%2!=0 or (adata[1]+bdata[1])%2!=0  or (adata[2]+bdata[2])%2!=0  or (adata[3]+bdata[3])%2!=0  or (adata[4]+bdata[4])%2!=0  or (adata[5]+bdata[5])%2!=0 :
    ans = -1
print(ans)