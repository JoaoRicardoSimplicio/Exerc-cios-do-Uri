qtd = int(input())
min = int(input())
lista = []
clas = 0
maior = 0
for cont in range(0, qtd, 1):
    var = int(input())
    if var>maior:
        maior = var
    lista.append(var)
while clas<min:
    aux = 0
    for cont in range(0, len(lista), 1):
        if lista[cont]!=0:
            if lista[cont]==maior:
                clas += 1
                lista[cont]=0
            elif lista[cont]!=maior:
                if lista[cont]>aux:
                    aux = lista[cont]
    maior = aux
    if clas>=min:
        break
print(clas)
