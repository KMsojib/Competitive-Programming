t = int(input())

for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    total_sum = sum(a)
    
    while n > 1:
        b = []
        for i in range(n - 1):
            b.append(a[i + 1] - a[i])
    
        if sum(b) < 0:
            for i in range(len(b)):
                b[i] = -b[i]
        
        total_sum = max(total_sum, sum(b))
        a = b
        n = len(a)
    
    print(total_sum)