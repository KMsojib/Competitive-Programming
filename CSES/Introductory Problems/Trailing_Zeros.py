def count_trailing_zeros(n):
    count = 0
    power_of_five = 5
    while n >= power_of_five:
        count += n // power_of_five
        power_of_five *= 5
    return count
n = int(input()) 
print(count_trailing_zeros(n))
