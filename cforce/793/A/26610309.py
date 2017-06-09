n,k=map(int,input().split())
a = list(map(int,input().split()))
a.sort(reverse=True)
m = min(a)
ans=0
for i in a:
    if (i-m)%k==0:
        ans+=(i-m)//k
    else:
        ans=-1
        break
print(ans)