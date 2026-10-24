N = int(input())

L = []

for _ in range(N):
    numero = int(input())
    if numero != 0:
        L.append(numero)
    else:
        L.pop()

print(sum(L))