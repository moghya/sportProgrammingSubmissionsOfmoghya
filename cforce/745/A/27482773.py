w = []
s = input()
w.append(s)
wordlength = len(s)
s = s+s[0:wordlength-1]
for i in range(1,wordlength):
	word=s[i:i+wordlength]
	if word not in w:
		w.append(word)
print(len(w))
