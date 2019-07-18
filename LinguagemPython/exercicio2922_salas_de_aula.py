while True:
    try:
        SalaA, SalaB = input().split(" ")
        SalaA = int(SalaA)
        SalaB = int(SalaB)
        if SalaA>SalaB:
            SalaA, SalaB = SalaB, SalaA
        elif SalaA==SalaB:
            SalaA = 0
            SalaB = 1
        R = (SalaB-SalaA)-1
        print(R)
    except EOFError:
        break



## João Ricardo Simplício Soares ##