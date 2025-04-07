def wc(s):
    f = open(s,'r')
    s = f.read()
    f.seek(0)
    l = f.readlines()
    f.close()
    lp = s.split()

    print("EL ARCHIVO TIENE " + str(len(l)) + " LINEAS")
    print("El ARCHIVO TIENE " + str(len(lp)) + " PALABRAS" )
    print("EL ARCHIVO TIENE " + str(len(s))+ " CARACTERES")


wc(r'C:\Users\Franco\Desktop\FinalProgII\Unidad6Python\EJ3WC.txt')