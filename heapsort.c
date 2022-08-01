#include <stdio.h>
#define max 100

void delay(){
    int j;
    for(j=0;j<10000;j++)
}

void swap(int *a, int *b) {

  int temp = *a;

  *a = *b;

  *b = temp;

}

void heapify(int arr[], int n, int i) {
  int largest = i;

  int left = 2 * i + 1;

  int right = 2 * i + 2;

  if (left < n && arr[left] > arr[largest])

    largest = left;

  if (right < n && arr[right] > arr[largest])

    largest = right;

  if (largest != i) {

    swap(&arr[i], &arr[largest]);

    heapify(arr, n, largest);

  }

}

void heapSort(int arr[], int n) {

  for (int i = n / 2 - 1; i >= 0; i--)
    delay();
    heapify(arr, n, i);

  for (int i = n - 1; i >= 0; i--) {
    swap(&arr[0], &arr[i]);
    heapify(arr, i, 0);

  }

}

void printArray(int arr[], int n)
{
  for (int i = 0; i < n; i++)
    printf("%d ", arr[i]);
  printf("\n");

}


int main()
{
  int n;
  clock_t start,end;
  printf("Enter the no. of elements \n");
  scanf("%d",&n);
  int arr[n];
  printf("Enter the array elements : \n");
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  start = clock();
  heapSort(arr, n);
  end = clock();
  printf("Sorted array is given in the following way \n");
  printArray(arr, n);
    printf("Time taken : : %f",(float)(end - start)CLOCKS_PER_SEC);
}

