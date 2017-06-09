n = int(input())
home = input()
ans = 'contest'
flights = []
for i in range(n):
    s = input()
    sou = s[0:3]
    to = s[-3:]
    flight = (sou,to)
    rev = (to,sou)
    if rev in flights:
        flights.remove(rev)
    else:
        flights.append(flight)
if len(flights)==0:
    ans = 'home'
print(ans)
