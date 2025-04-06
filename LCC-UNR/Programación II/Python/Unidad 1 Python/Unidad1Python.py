#Unidad 1 Python Práctica Final

#1. Ejercitación
#1.1 Primeros programas usando números

#Ejercicio 1
def pares25(i=25):
    if i > 1:
        print(2*i)
        pares25(i-1)
    else:
        print(2)

#pares25()

#Ejercicio 2
def pares100(n=100):
    if n > 1:
        print(2*n)
        pares100(n-1)
    else:
        print(2)

#pares100()

#1 si se puede solo se cambia el n=100 por un n

#2
def paresn(n):
    if n > 1:
        print(2*n)
        paresn(n-1)
    else:
        print(2)

#paresn(10)

#Ejercicio 3
def paresn_m(n,m):
    if m % 2 == 1:
        m = m + 1
        print(m)
        paresn_m(n-1,m)
    elif n > 1 and m % 2 == 0:
        m = m +2
        print(m)
        paresn_m(n-1,m)
    else:
        print(m+2)

#paresn_m(20,10)

#Ejercicio 4
def suma50(n=50,total=0):
    if n > 1:
        total = total + n
        suma50(n-1,total)
    else:
        total = total + 1
        print(total)

#suma50()

#Ejercicio 5
def sumannat(n,total=0):
    if n >1:
        total = total + n
        sumannat(n-1,total)
    else:
        total = total + 1
        print(total)

#sumannat(5)

#Ejercicio 6
def mayorn_menorm(n,m,total=0):
    if n < m:
        total = total + n + 1
        mayorn_menorm(n+1,m,total)
    else:
        print(total-m)
        
#mayorn_menorm(4,7)

#1.2 Primeros programas usando cadenas

#Ejercicio 7
def duplica(c):
    print(c+c)

def duplica2(c):
    print(c*2)

#duplica("pepe")
#duplica2("pepe")

#Ejercicio 8
def duplican(c,n):
    print(c*n)

#duplican("pepe",3)

#Primeros programas interactivos

#Ejercicio 9

#a)
def suma(n,m):
    return n+m

#b)
def resta(n,m):
    return n-m

#c)
def multiplicacion(n,m):
    return n*m

#d)
def division(n,m):
    return n/m

#e) y f)
def calculadora():
    x = int(input("Ingrese 1.Suma, 2.Resta, 3.Multiplicación, 4.División, 5.Salir"))

    if x == 5:
        quit()

    n = int(input("Ingrese el primer número"))
    m = int(input("Ingrese el segundo número"))

    if x == 1:
        print(suma(n,m))
    if x == 2:
        print(resta(n,m))
    if x == 3:
        print(multiplicacion(n,m))
    if x ==4:
        print(division(n,m))
    
    #calculadora()

calculadora()