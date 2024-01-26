a = int(input("Ingrese el valor de A: "))
b = int(input("Ingrese el valor de B: "))

if a+b==5:
    b += 3
    result = 2*a + b
    print(result)
else:
    a -= 1
    if (7*a + b)%2 == 0:
        print(a-b)
    else:
        print(a*b)
