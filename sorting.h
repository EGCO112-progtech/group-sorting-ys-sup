// selection sort function module in C


void swap(int* a, int* b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}


void display(int a[], int n) {

  int i;

  for (i = 0; i < n; i++) 
    printf("%5d", a[i]);
  printf("\n");
  // apo's part
}
void insertion(int a[],int n){
// ley's part
  for (int i = 0; i < n; i++)
  {
    int j = i;
    while (j > 0 && a[j-1] < a[j])
    {
      swap(&a[j-1], &a[j]);
      j--;
    }
    display(a, n);
  }
}

void selectionSort(int a[], int n) {
  int i, j;
  int m = a[0]; // dec m is min
  int mi = 0;

  for (j = 0; j < n - 1; j++) {
    m = a[j];
    mi = j;

    for (i = j + 1; i < n; i++) {
      if (m < a[i]) // find real min
      // if (a[mi] > a[i])
      {
        m = a[i];
        mi = i;
      }
    }
    swap(&a[j], &a[mi]);
    printf("\n");
    display(a, n);
  }
}

void bubbleSort(int a[], int n) {

  for(int i = 0; i < n-1; i++)
  {
    int sorted;
    for (int j = 0; j < n-i-1; j++)
    {
      if (a[j] < a[j + 1])
      {
        swap(&a[j], &a[j+1]);
        sorted = 1;
      }
      display(a, n);
    }
    printf("\n");
    if (sorted == 0) break;
  }

}

int typeCheck(char* x)
{
  if (strcmp(x, "bubble") == 0) return 1;
  if (strcmp(x, "selection") == 0) return 2;
  if (strcmp(x, "insertion") == 0) return 3;

  return 0;
}