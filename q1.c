#include <stdio.h>
int fatorial(int n) {
  int res = 0;

	if (n == 1) {
		return 1;
	}
	return res = n * fatorial(n - 1);
}

int main() {
	int n = 0;
  
  do {
    printf("Digite um inteiro maior que 0\n");
    scanf("%d", &n);
  } while (n < 1);

	int fat = fatorial(n);
  printf("O fatorial de %d é %d\n", n, fat);

	return 0;
}
