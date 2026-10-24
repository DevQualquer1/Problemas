risada = input()

vogais = ""

for letra in risada:
    if letra in "aeiou":
        vogais += letra

if vogais == vogais[::-1]:
    print("S")
else:
    print("N")