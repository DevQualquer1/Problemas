nota1, nota2 = input().split()

nota1 = float(nota1)
nota2 = float(nota2)

calculo = (nota1 + nota2) / 2

if calculo >= 7:
    print("Aprovado")
elif calculo >= 4:
    print("Recuperacao")
else:
    print("Reprovado")