def grep1(e,p):
    f = open(p,'r')
    l = f.readlines()
    f.close()
    for i in l:
        if e in i:
            print(i)

grep1('es',r'C:\Users\Franco\Desktop\FinalProgII\Unidad6Python\greptxt.txt')



def grep2(e,p):
    f = open(p,'r')
    l = f.readlines()
    f.close()
    for i in l:
        u = i.split()
        flag = 1
        for n in u:
            if e == n and flag != 0:
                print(i)
                flag = 0

grep2('es',r'C:\Users\Franco\Desktop\FinalProgII\Unidad6Python\greptxt.txt')

def prueba(l,e):
    for i in l:
        if e in i:
            print(i)

#prueba(['Hola', 'yo me Hola', 'llamo pepito'],'Hola')