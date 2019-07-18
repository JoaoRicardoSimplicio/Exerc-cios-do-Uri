from math import*
teste = int(input())
while teste>=1:
    base, pot = input().split(" ")
    base = int(base)
    pot = int(pot)
    total = base**pot
    total = str(total)
    print(len(total))
    teste-=1


## João Ricardo Simplício Soares ##