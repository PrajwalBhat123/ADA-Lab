#include<stdio.h>
#include<time.h>
#define max 100

int a[max],n;
void delay(){
    int j;
    for(j=0;j<10000000;j++);
}
void insertionSort(){
    int i, key, j;
    delay();
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}


void main(){
    clock_t start,end;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
            a[i] = rand(0,10000);
    }
    start = clock();
    insertionSort();
    end = clock();
    printf("The sorted array : \n");
    for(int i=0;i<n;i++){
        printf("%d \t",a[i]);
    }
    printf("\n Time taken : %f",(float)((end - start)CLOCKS_PER_SECOND);
}

