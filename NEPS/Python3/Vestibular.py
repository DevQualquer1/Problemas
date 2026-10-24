N = int(input())

LQ = list(input())
LR = list(input())

questoesCertas = 0

for i in range(N):
    if LQ[i] == LR[i]:
        questoesCertas += 1

print(f"{questoesCertas}")