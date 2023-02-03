// selection sort function module in C

void display(int a[],int n){

    int i;

    for(i=0;i<n;i++)
        printf("%5d",a[i]);
    printf("\n");
  
}

void swap(int *a,int *b){
 int temp;
  temp=*a;
  *a=*b;
  *b=temp;
  
}

void selectionSort(int a[], int n) {
  int i, j;
  int m = a[0]; // dec m is min
  int mi = 0;

  for (j = 0; j < n - 1; j++) {
    m = a[j];
    mi = j;
    printf("m = %d\n", m);
    printf("mi = %d\n", mi);
    for (i = j + 1; i < n; i++) {
      if (m > a[i]) // find real min
      // if (a[mi] > a[i])
      {
        m = a[i];
        mi = i;
      }
    }
    swap(&a[j], &a[mi]);
    printf("a[j] = %d\n", a[j]);
    printf("a[mi] = %d\n", a[mi]);
    display(a, n);
    printf("\n");
  }
}



void insertion(int a[],int n){


}


void bubbleSort(int a[],int n){

int i,j;
int sorted;
// how may pair to compare?
for(j=1;j<=n-1;j++){
 
  display(a,n);
 }
  
}




