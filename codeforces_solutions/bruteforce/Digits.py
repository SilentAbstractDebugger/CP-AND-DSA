import sys
sys.set_int_max_str_digits(6000)
def fact(n):
    if(n==0):
        return 1
    return n*fact(n-1)

t = int(input())
for i in range(t):
    while True:
        line = input().strip()
        if line:  # non-empty line
            n, k = map(int, line.split())
            break

    n = min(n,7)
    s = int(str(k)*fact(n))
    for i in range(1,10,2):
        if s%i == 0:
            print(i, end = ' ')
    print()