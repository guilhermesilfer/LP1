#include <stdio.h>

int main() {
  char string[100];

  printf("Digite algo:\n");
  fgets(string, 100, stdin);
  
  int cont = 0;

  while (string[cont] != '\n') {
    //printf("%c != \\n \n", string[cont]);
    cont++;
  }
  printf("Essa string tem %d caracteres\n", cont);

  return 0;
}
