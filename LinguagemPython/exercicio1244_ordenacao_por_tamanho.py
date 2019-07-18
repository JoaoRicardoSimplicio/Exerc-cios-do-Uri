vezes = int(input())
while vezes>=1:
    palavras = input().split(" ")
    texto = ""
    while len(palavras)>0:
        maior = 0
        for cont in range(0, len(palavras), 1):
            if len(palavras[cont])>maior:
                maior = len(palavras[cont])
                pos = cont
        texto+=palavras[pos]
        if len(palavras)>1:
            texto+=" "
        palavras.pop(pos)
    print(texto)
    vezes-=1



## João Ricardo Simplício Soares ##