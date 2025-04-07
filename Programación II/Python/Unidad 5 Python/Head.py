def head(s,n):
    N = int(n)
    f = open(s,'r')
    l = f.readlines()
    for i in range(0,N):
        print(l[i])
    f.close()

head(r'C:\Users\Franco\Desktop\FinalProgII\Unidad6Python\Headdiria.txt',7)


