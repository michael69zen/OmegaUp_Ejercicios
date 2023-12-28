#("PENSAMIENTO COMPUTACIONAL")
#print("Ing. Miguel Romilio ACEITUNO ROJO")
#print("Est. Cristhian Michael JALLO PAREDES")
#print("Código => 236543")

# Definimos la cantidad N, para N numeros
N = int(input())
# Creamos una array para guardar los numeros
arreglo = list()
# Recorremos N veces para pedir al usuario los N numeros
for i in range(N):
    valor = int(input())
    # guardamos los valores en el arreglo
    arreglo.append(valor)

# pedimos al usuario que ingrese las opciones de par e impar
P = int(input())
# creamos listas para los numeros pares e impares
pares = list()
impares = list()

# Si son pares que se guarde en la lista pares
if P==0:
    for i in arreglo:
        if i % 2 == 0:
            pares.append(i)
    # Imprimimos en pantalla los pares si P=0        
    print(pares)
# Si son impares que se guarde en la lista impares    
else:
    for i in arreglo:
        if i % 2 != 0:
            impares.append(i)
    # Imprimimos en pantalla los impares si P!=0        
    print(impares)        
    