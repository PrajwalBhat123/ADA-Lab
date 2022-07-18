#include<stdio.h>
#include<time.h>
#define max 10
int a[max],n,pivot;

void delsy(){
    int j = 0;
    while(j<=1000){
        j++;
    }
}
void swap(int i,int j){
    int temp;
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}
void quickSort(int low,int high){
    int i,j,pivot;
    pivot = a[low];
    i = low + 1;
    j = high;
    while(1){
        delay();
        while(a[i] <= pivot && i<= high){
            i++;
        }
        while(a[j] > pivot && j>= low){
            j--;
        }
        if(i < j){
           void swap(i,j);
        }else{
            a[low] - a[j];
            a[j] = pivot;
            return;
        }
    }
}
void main(){
    int i;
    clock_t start,end;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    printf("Entering the elements ::: ");
    for(i=0;i<n;i++){
        arr[i] = rand(0,max);
    }
    start = clock();
        quickSort(0,n-1);
    end = clock();
    printf("The sorted array : \n");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("Time taken : %f",(float)((end-start)/CLOCKS_PER_SECOND));
}



