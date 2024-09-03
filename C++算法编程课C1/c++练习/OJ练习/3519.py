N = 11
f = [[0] * N for _ in range(N)]

def init():
    for i in range(10):
        f[1][i] = 1

    for i in range(2, N):
        for j in range(10):
            for k in range(10):
                if abs(j - k) >= 2:
                    f[i][j] += f[i - 1][k]

def dp(n):
    if n == 0:
        return 0

    a = []
    while n:
        a.append(n % 10)
        n //= 10

    res = 0
    last = -2

    for i in range(len(a) - 1, -1, -1):
        x = a[i]

        for j in range(i == len(a) - 1, x):
            if abs(j - last) >= 2:
                res += f[i + 1][j]

        if abs(x - last) < 2:
            break

        last = x

        if i == 0:
            res += 1

    for i in range(1, len(a)):
        for j in range(1, 10):
            res += f[i][j]

    return res

init()

a, b = map(int, input().split())
print(dp(b) - dp(a - 1))
