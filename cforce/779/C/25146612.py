n,k=map(int,input().split())
a = list(map(int,input().split()))
b = list(map(int,input().split()))
items = []
for i in range(0,n):
	item = (b[i]-a[i],a[i],b[i])
	items.append(item)
items = sorted(items,key = lambda x: int(x[0]),reverse=True)

ans = 0
for i in range(0,n):
	if i < k:
		ans = ans + items[i][1]
	else:
		ans = ans + min(items[i][1],items[i][2])
print(ans)