import string

alfabeto = list(string.ascii_lowercase)

chave = 3
mensagem = "AbACaXI"
# linha abaixo converte as letras para minúsculas
# mensagem = mensagem.lower()

# tamanho da lista alfabeto
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
