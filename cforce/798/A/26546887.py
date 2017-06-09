s = input()
if s == s[::-1]:
    if len(s)%2!=0:
        print('YES')
    else:
        print('NO')
else:
    cnt = 0
    for i in range(0,len(s)//2):
        if s[i]!=s[len(s)-i-1]:
            cnt+=1
    if cnt==1:
        print('YES')
    else:
        print('NO')
    
        