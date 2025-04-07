def rot13(a1,a2):
    l = ['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']
    f1 = open(a1,'r')
    llineas = f1.readlines()
    f1.close()
    f2 = open(a2,'w')
    for i in llineas:
        for n in i:
            if n in l:
                f2.write(l[(l.index(n)+13)%26])
            else: 
                f2.write(n)
    
    f2.close()


rot13(r'C:\Users\Franco\Desktop\rot13ej.txt',r'C:\Users\Franco\Desktop\FinalProgIIUnidad6Python\\rot13copy.txt')