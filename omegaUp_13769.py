#("PENSAMIENTO COMPUTACIONAL")
#print("Ing. Miguel Romilio ACEITUNO ROJO")
#print("Est. Cristhian Michael JALLO PAREDES")
#print("Código => 236543")

# Asignamos variables
juguetes = int(input())
# Creamos una lista para guardar los niveles
niveles = list()
# Pedimos al usuario los niveles

for i in range(juguetes):
    # Ingresa niveles
    nivel_div = int(input())
    # Guarda los niveles en la lista niveles
    niveles.append(nivel_div)

# Ordenamos la lista 
niveles.sort()
# Eliminamos el juguete con menor diversion
niveles.pop(0)

# Suma los juguetes con mayor diversion
suma = sum(niveles)
    
# Imprimimos la diversion total
print(suma)
    