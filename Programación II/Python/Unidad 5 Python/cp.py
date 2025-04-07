def copy():
    f = open(r'C:\Users\Franco\Desktop\FinalProgII\Unidad6Python\Prueba.txt','r')
    a = f.read(20)
    f.close()
    f2 = open(r'C:\Users\Franco\Desktop\FinalProgII\Unidad6Python\copia.txt','w')
    f2.write(a)
    f2.close()
copy()