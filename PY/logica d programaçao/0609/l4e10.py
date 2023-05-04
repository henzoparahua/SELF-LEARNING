a = int(input("digite um numero a: "))
b = int(input("digite um numero b: "))

if a>b:
    b=b*10
    a=a/2
    a=a+b

    a=a%2

    if a==0:
        print("é par")
    else:
        print("n é par")
else:
    a=a*10
    b=b/2
    a=a+b

    if a==0:
        print("é par")
    else:
        print("n é par")
    
