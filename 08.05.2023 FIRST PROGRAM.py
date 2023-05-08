start, end = input().split()
start = int(start)
end = int(end)

def is_prime(n):
    if n <= 1:
        return False
    for i in range(2, int(n**0.5)+1):
        if n % i == 0:
            return False
    return True

for i in range(start+1, end):
    if is_prime(i):
        print(i, end=' ')
