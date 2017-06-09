n = int(input())
s = input()
a = 0
for x in s:
    if x=='A':
        a = a+1
if a > (n-a):
    print('Anton')
elif (n-a)>a:
    print('Danik')
else:
    print('Friendship')