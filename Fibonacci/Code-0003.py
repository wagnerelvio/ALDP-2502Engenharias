'''
Fibonacci com memoização (recursão eficiente)
'''

from functools import lru_cache

@lru_cache(maxsize=None)
def fibonacci(n):
    if n <= 1:
        return n
    return fibonacci(n-1) + fibonacci(n-2)

# Exemplo
for i in range(10):
    print(fibonacci(i), end=' ')
