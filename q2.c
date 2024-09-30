#include <stdio.h>

int main() {
  int vec[5];
  
  printf("Digite 5 números\n");
  for (int i = 0; i < 5; i++) {
    printf(": ");
    scanf("%d", &vec[i]);
  }

  int sum = 0;

  for (int j = 0; j < 5; j++) {
    sum += vec[j];
  }

  printf("A soma dos números é %d\n", sum);

  return 0;
}
