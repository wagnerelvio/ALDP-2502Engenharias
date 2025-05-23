'''
Fibonacci como gerador (com yield)
'''

def fibonacci_gen(n):
    a, b = 0, 1
    for _ in range(n):
        yield a
        a, b = b, a + b

# Exemplo
for num in fibonacci_gen(10):
    print(num, end=' ')
