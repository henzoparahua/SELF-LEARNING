import string

alfabeto = list(string.ascii_lowercase)

#Pode-se usar a chave no negativo ou no positivo.
#Sendo assim, é possivel criptografar ou descriptografar nos dois modos.
chave = -3
mensagem = "banana"

# linha abaixo converte as letras para minúsculas
mensagem = mensagem.lower()

# tamanho da lista do alfabeto
# n = len(alfabeto)

# tamanho tabela ASCII
n = 128

cifrada = ""
for letra in mensagem:
    # achar no alfabeto a letra que esteja chave posições a frente
    # indice = alfabeto.index(letra)
    indice = ord(letra)

    # nova_letra = alfabeto[(indice + chave)%n]
    nova_letra = chr((indice + chave)%n)

    # substituir na mensagem a letra pela nova_letra
    cifrada = cifrada + nova_letra

print("Original: ", mensagem)
print("Cifrada: ", cifrada)
