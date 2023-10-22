#Calcular o n-esimo termo da Serie de Fibonacci
def fibonacci(n):
    fib = [0] * (n + 1)  # Inicialize uma lista com valores intermediarios

    # Casos base
    fib[0] = 0
    fib[1] = 1

     
    for i in range(2, n + 1):
        fib[i] = fib[i - 1] + fib[i - 2]

    return fib[n]

n = int(input("Digite o valor de n para calcular o n-esimo numero de Fibonacci: "))
resultado = fibonacci(n)
print(f"O {n}-esimo numero de Fibonacci eh {resultado}.") 
