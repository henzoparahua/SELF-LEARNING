a = int(input("digite um numero a: "))
b = int(input("digite um numero b: "))
c = int(input("digite um numero c: "))

if a<b:
    if a<c:
        print(a)
        if b<c:
            print(b)
            print(c)
        else:
            print(c)
            print(b)
    else:
        print(c)
        print(a)
        print(b)
else:
    if b<c:
        print(b)
        if a<c:
            print(a)
            print(c)
        else:
            print(c)
            print(a)
    else:
        print(c)
        print(b)
        print(a)
