import math

N = int(input())

numeros = input().split()

for numero in numeros:
    print("{:.4f}".format(math.sqrt(float(numero))))