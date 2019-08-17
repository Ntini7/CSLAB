#include<stdio.h>
#include<stdlib.h>

void bubble(int[], int);

void main(void){
	int arr[100], n, i;
	printf("\n\tEnter size of array\t");
	scanf("%d", &n);
	printf("\tEnter elements of array\t");
	for(i=0;i<n;++i)
		scanf("%d", &arr[i]);
	bubble(arr, n);
	printf("Bubble sorted array :: ");
	for(i=0;i<n;++i)
		printf("%d ", arr[i]);	
	printf("\n");
}

void bubble(int arr[], int n){
	int i, j, temp;
	for(i=0; i<n-1; ++i){
		for(j=0; j<n-1-i; ++j){
			if(arr[j]>arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

