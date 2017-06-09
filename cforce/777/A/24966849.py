n = int(input())
l = [0,0,0]
b = int(input())
l[b] = 1
i = n%6
while i >=1:
    if i%2==0:
        t = l[1]
        l[1] = l[2]
        l[2]=t
    else:
        t = l[1]
        l[1] = l[0]
        l[0]=t
    i = i - 1
print(l.index(1))