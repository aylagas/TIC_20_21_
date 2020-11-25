def ulador():
    palabra=raw_input("Inroduce una palabra para ulular.")
    for cont in range(0,100):
        if (palabra[cont]=='a' or palabra[cont]=='e' or palabra[cont]=='i' or palabra[cont]=='o'):
            print 'u'
        else:
            print palabra[cont]

ulador()                                                                                 
