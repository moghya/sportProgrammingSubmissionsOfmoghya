inp = input().split()
s = inp[0]
k = int(inp[1])
ans = 0
i = len(s) - 1
while i >=0 and k>0:
	if s[i]!='0':
		ans=ans+1
	else:
		k=k-1
	i = i - 1

if k==0:
	print(ans)
else:
	if '0' in s:
		print(len(s)-1)
	