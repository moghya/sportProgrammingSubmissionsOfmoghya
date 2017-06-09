n  = int(input())
a = ['hate','love']
for _ in range(0,n):
    if _ > 0:
        print('that',end=' ')
    print('I',end=' ')
    print(a[_%2],end=' ')
print('it')