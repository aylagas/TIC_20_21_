import random

def adivino():
    maxn=10000000
    numero=random.randint(1,maxn)
    intento=input("Intentalo: ")
    while intento!=numero:
        if intento>numero:
            print "OMG is too big"
        if intento<numero:
            print "HAHAHA is too small"
        intento=input("Intentalo: ")
    print "Nice"

adivino()
    
