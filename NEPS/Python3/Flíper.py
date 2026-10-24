A, B = input().split()

A = int(A)
B = int(B)

if A == 1 and B == 0:
    print("B")
elif A == 0 and B == 1 or A == 0 and B == 0:
    print("C")
else:
    print("A")