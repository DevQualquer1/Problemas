N = int(input())

calculo = 0

numeros = input().split()

for i in range(0, N):
    calculo += int(numeros[i])

print(f"{calculo}")