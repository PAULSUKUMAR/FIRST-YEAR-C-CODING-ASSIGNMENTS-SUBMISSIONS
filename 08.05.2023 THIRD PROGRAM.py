def is_prime(n):
    if n <= 1:
        return False
    for i in range(2, int(n**0.5)+1):
        if n % i == 0:
            return False
    return True

n = int(input())

for i in range(n):
    start, end = input().split()
    start = int(start)
    end = int(end)
    count = 0
    for j in range(start, end+1):
        if is_prime(j):
            count += 1
    print(count)
