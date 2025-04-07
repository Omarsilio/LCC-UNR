#Ejercicio 6
#a)
def cargarDatos(a):
    f = open(a,'r')
    l = f.readlines()
    f.close()
    d = {}
    for i in l:
        s = i.strip().split(",")
        d[s[0]] = s[1].strip()
    
    return d

#print(cargarDatos(r'C:\Users\Franco\Desktop\FinalProgII\Ejercicio6A.txt'))
#b
def guardarDatos(d,a):
    f = open(a,'w')
    for i in d:
        f.write(i+", "+d[i]+"\n")
    f.close()



dicej6 = {'Usuario1b': 'Carlo', 'Usuario2b': 'Maria', 'Usuario3b': 'Juan', 'Usuario4b': 'Pablo', 'Usuario5b': 'Pepa', 'Usuario6b': 'Abue', 'Usuario7b': 'Camion'}
guardarDatos(dicej6,r'C:\Users\Franco\Desktop\FinalProgII\Ejercicio6B.txt')
