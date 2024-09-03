class Paidui:
    def __init__(self, value, p):
        self.value = value
        self.p = p

n = int(input())
values = list(map(int, input().split()))
a = []
for i in range(1, n+1):
    a.append(Paidui(values[i-1], i))

a.sort(key=lambda x: (x.value, x.p))

sum = 0
for i in range(1, n+1):
    #print(a[i-1].p, end=" ")
    sum += (n-i) * a[i-1].value

#print()
print(f"{sum/n:.2f}")