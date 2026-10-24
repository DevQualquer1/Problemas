A, B, C = input().split()

A = int(A)
B = int(B)
C = int(C)

if A == 0 and B == 0 and C == 1:
    print("C")
elif A == 0 and B == 1 and C == 0:
    print("B")
elif A == 1 and B == 0 and C == 0:
    print("A")
elif A == 1 and B == 1 and C == 0:
    print("C")
elif A == 1 and B == 0 and C == 1:
    print("B")
elif A == 0 and B == 1 and C == 1:
    print("A")
else:
    print("*")