n, m = map(int, input().split())
breads = []
for _ in range(n):
    bread = input()
    breads.append(bread)

for i in range(n):
    print(breads[i][::-1])