N = int(input())

dinheiro = 0;
dias = 0;

L = []

for i in range(N):
    temp = int(input())
    L.append(temp)

for j in range(len(L)):
    dinheiro += L[j]
    dias += 1
    if dinheiro >= 1000000:
        print(f"{dias}")
        break