t = (int)(input())

for _ in range(t):
    n = (int)(input())
    a = input()
    ok = 0
    
    if a.count("111") >=1:
        ok = 1
    if a.count("11") >= 2:
        ok = 1
    if a.count("11") >=1 and (a[0] == '1' or a[-1]=='1'):
        ok = 1
    if a[0] =='1' and a[-1] == '1':
        ok = 1
    
    if ok == 1:
        print("Yes")
    else:
        print("No")