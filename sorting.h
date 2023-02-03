// selection sort function module in C

void display(int a[], int n) {

  int i;

  for (i = 0; i < n; i++)
    printf("%5d", a[i]);
  printf("\n");
  // apo's part
}
void selectionSort(int data[], int length) 
{ 
	int i, j, m, mi; 
	
     display(data,length);
     
	
} 

void insertion(int a[],int n){
// ley's part
  for (int i = 0; i < n; i++)
  {
    int j = i;
    while (j > 0 && a[j-1] > a[j])
    {
      swap(&a[j-1], &a[j]);
      j--;
    }
    display(a, n);
  }
}

void insertion(int a[], int n) {}

void swap(int *a, int *b) {
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

void bubbleSort(int a[], int n) {

    for(int i = 0; i < n-1; i++)
  {
    int sorted;
    for (int j = 0; j < n-i-1; j++)
    {
      if (a[j] > a[j + 1])
      {
        swap(&a[j], &a[j+1]);
        sorted = 1;
      }
      display(a, n);
    }
    if (sorted == 0) break;
  }
}
