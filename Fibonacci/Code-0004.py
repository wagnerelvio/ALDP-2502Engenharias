'''
Fibonacci usando lista (armazenando a sequência)
'''

def fibonacci(n):
    seq = [0, 1]
    for i in range(2, n):
        seq.append(seq[-1] + seq[-2])
    return seq[:n]

# Exemplo
print(fibonacci(10))
