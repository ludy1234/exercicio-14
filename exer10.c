#include <stdio.h>

  int main() {
    int array[5];

    printf("Digite 5 numeros inteiros:\n");
    for (int i = 0; i < 5; i++) {
    scanf("%d", &array[i]);
        }

    int *p = array;

    printf("Dobro de cada valor lido\n");
        for (int i = 0; i < 5; i++) {
         printf("%d\n", 2 * (*(p + i)));
        }

    return 0;
  }  