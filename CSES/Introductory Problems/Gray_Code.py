def generateGrayCode(n):
    if n == 0:
        return []
    if n == 1:
        return ["0", "1"]
    prev_gray = generateGrayCode(n - 1)
   
    reflected_gray = prev_gray[::-1]
    original_with_0 = ['0' + code for code in prev_gray]
    
    reflected_with_1 = ['1' + code for code in reflected_gray]
    
    return original_with_0 + reflected_with_1

n = int(input())
gray_codes = generateGrayCode(n)

for code in gray_codes:
    print(code)
