def edad_media():
    suma_edades=0
    print "INTRODUCE LAS EDADES"
    for cont in range(1,11):
        print "edad",cont,":"
        edad=input()
        suma_edades=suma_edades + edad
    print "La suma de las edades es ",suma_edades

edad_media()
