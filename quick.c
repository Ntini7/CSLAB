#include<stdio.h>
void quicksort(int arr[],int low,int high);
int partition(int arr[],int low,int high);
int main(void){
    int arr[10],n;
    printf("\tEnter the number of elements to be Inserted\t");
    scanf("%d",&n);
    printf("\tEnter the elements of array\t");
    for(int i=0;i<n;i++) 
    	scanf("%d",&arr[i]);
    quicksort(arr,0,n-1);
    printf("\tSorted elements :: ");
    for(int i=0;i<n;i++) 
    	printf("%d ",arr[i]);
    printf("\n");
}

void quicksort(int arr[],int low ,int high){
    if(low<high){
        int p=partition(arr,low,high);
        quicksort(arr,low,p-1);
        quicksort(arr,p+1,high);
    }
}

int partition(int arr[],int low,int high){
    int pivot=arr[high];
    int i=low-1;
    for(int j=low;j<high;j++){
        if(arr[j]<pivot){
            i++;
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    int temp=arr[i+1];
    arr[i+1]=arr[high];
    arr[high]=temp;
    return i+1;
}
