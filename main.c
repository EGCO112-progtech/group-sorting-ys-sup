#include "sorting.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int i, j = 0, new_number, N, *a;

  N = argc - 1;
  a = (int *)malloc(sizeof(int) * N);
  for (i = 0; i < N; i++) {
    a[i] = atoi(argv[i + 1]);
  }

  selectionSort(a, N);

  return 0;
}
