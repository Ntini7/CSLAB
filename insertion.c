#include<stdio.h>
#include<stdlib.h>

void insertion(int[], int);

void main(void){
	int arr[100], n, i;
	printf("\n\tEnter size of array\t");
	scanf("%d", &n);
	printf("\tEnter elements of array\t");
	for(i=0;i<n;++i)
		scanf("%d", &arr[i]);
	insertion(arr, n);
	printf("Insertion sorted array :: ");
	for(i=0;i<n;++i)
		printf("%d ", arr[i]);	
	printf("\n");
}

void insertion(int arr[], int n){
	int i, temp, pos;
    for(i=1;i<n;i++){
		temp = arr[i];
		for(pos=i;(pos>0 && arr[pos-1]>temp); --pos)
			arr[pos]=arr[pos-1];
		arr[pos] = temp;
	}
}
