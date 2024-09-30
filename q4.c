#include <stdio.h>

int isPrime(int num) {
  int x = num - 1;

  while (x > 1) {
    if (num % x == 0) {
      return 0;
    }
    x--;
  }

  return 1;
}

int main() {
  while (1) {
    int n = 0;

    printf("Digite um número inteiro positivo maior que 1 (-1001 para parar)\n");

    scanf("%d", &n);
    if (n == -1001) return 0;

    while (n <= 1) {
      if (n == -1001) return 0;
      else if (n <= 1) printf("Inteiro maior que 1\n");
      scanf("%d", &n);
    }

    if (isPrime(n)) printf("É primo.\n");
    else printf("Não é primo\n");

    printf("\n");
  }
}
