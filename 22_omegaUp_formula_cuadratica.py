#_________PENSAMIENTO___COMPUTACIONAL_________
#___Ing._ACEITUNO_ROJO_Miguel_Romilio___
#___Est._JALLO_PAREDES_Cristhian_Michael___
#___Codigo:_236543___
#___Nro:06___
#___Escriba_un_codigo_para_resolver_la_formula_de_Bhaskara___

print("a(x^2)+b(x)+c")
a = int(input("a = "))
b = int(input("b = "))
c = int(input("c = "))
print(f"{a}(x^2)+{b}(x)+{c}")

#discriminante
discri = (b**2) - (4*a*c)

if discri < 0:
    print("NO EXISTE SOLUCION EN LOS NUMEROS REALES / PERTENECE A LOS NUMEROS COMPLEJOS i ")
else: 
    x1 = (-b + (discri)**0.5) / (2*a)
    x2 = (-b - (discri)**0.5) / (2*a)

    print(f"CONJUNTO SOLUCION = '{x1}' , '{x2}'")
