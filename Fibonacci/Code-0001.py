'''
Fibonacci com for (iterativo simples)
'''
def fibonacci(n):
    a, b = 0, 1
    for _ in range(n):
        print(a, end=' ')
        a, b = b, a + b

# Exemplo: primeiros 10 números
fibonacci(10)
