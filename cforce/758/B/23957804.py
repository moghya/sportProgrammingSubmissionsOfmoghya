import math
s = input()
i = 1
a = [[],[],[],[]]
for _ in s:
    if i==1:
        a[i-1].append(_)
        i=2
    elif i==2:
        a[i-1].append(_)
        i=3
    elif i==3:
        a[i-1].append(_)
        i=4
    else:
        a[i-1].append(_)
        i=1

data = {
    'R':0,
    'B':0,
    'Y':0,
    'G':0,
}
for _ in a:
    cnt = 0
    ans = '!'
    for x in _:
        if x=='!':
            cnt=cnt+1
        else:
            ans = x
    data[ans]=str(cnt)
print(data['R']+' '+data['B']+' '+data['Y']+' '+data['G'])