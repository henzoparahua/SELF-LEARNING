a = int(input("digite um numero a: "))
b = int(input("digite um numero b: "))
c = int(input("digite um numero c: "))

if a<b:
    if a<c:
        a=a+5
        print(a)
    else:
        c=c+5
        print(c)
else:
        if b<c:
            b=b+5
            print(b)
        else:
            c=c+5
            print(c)
