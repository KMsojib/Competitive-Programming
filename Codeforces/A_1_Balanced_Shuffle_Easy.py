s = input()
a = []
b = 0
for i in range(len(s)):
    a.append((b,-i,s[i]))
    if s[i] == '(':
        b+=1
    else:
        b-=1
a.sort()
print("".join(x[2] for x in a))