while True:
        vezes = int(input())
        dominio = []
        imagem = []
        repetedom = 0
        repeteimg = 0
        if vezes==0:
                break
        while vezes>=1:
                x, sep, y = input().split(" ")
                dominio.append(x)
                imagem.append(y)
                vezes-=1
        for cont in range(0, len(dominio), 1):
                for i in range(0, len(dominio), 1):
                        if cont!=i:
                                if dominio[cont]==dominio[i]:
                                        repetedom = 1
                                        break
                if repetedom==1:
                        break
        if repetedom==0:
                for cont in range(0, len(imagem), 1):
                        for i in range(0, len(imagem), 1):
                                if cont!=i:
                                        if imagem[cont]==imagem[i]:
                                                repeteimg = 1
                                                break
                        if repeteimg==1:
                                break
        if repetedom==1 and repeteimg==0:
                print ("Not a function.")
        elif repetedom==0 and repeteimg==1:
                print ("Not invertible.")
        elif repetedom==0 and repeteimg==0:
                print ("Invertible.")

## João Ricardo Simplício Soares ##