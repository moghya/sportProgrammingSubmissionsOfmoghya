s = input()
strings = []
strings.append(s)
i = 0
while i < len(s):
    s = s[1:] + s[0]
    if s not in strings:
        strings.append(s)
    i = i + 1
        
print(len(strings))
    
    
    