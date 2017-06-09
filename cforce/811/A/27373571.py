a,b=map(int,input().split())
cnt = 1
i=0
while True:
    if i==0:
        if a < cnt:
            print('Vladik')
            break
        a-=cnt
        i=1
    else:
        if b < cnt:
            print('Valera')
            break
        b-=cnt
        i=0
    cnt+=1
