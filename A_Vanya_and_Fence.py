n, h = [int(x) for x in input().split()]
a = [int(x) for x in input().split()]
width = 0
for i in range(n):
    if a[i] > h:
        width += 2
    else:
        width += 1
print(width)
