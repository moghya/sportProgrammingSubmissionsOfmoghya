d = {
    'rat':[],
    'child':[],
    'man':[],
    'captain':[]
}
i = int(input())
while i:
    s = input()
    data = s.split()
    if data[1] == 'child' or data[1] == 'woman':
        d['child'].append(data[0])
    else:
        d[data[1]].append(data[0])
    i = i -1

for p in d['rat']:
    print(p)
for p in d['child']:
    print(p)
for p in d['man']:
    print(p)
for p in d['captain']:
    print(p)