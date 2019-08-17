#include<stdio.h>
#include<stdlib.h>

void selection(int[], int);

void main(void){
	int arr[100], n, i;
	printf("\n\tEnter size of array\t");
	scanf("%d", &n);
	printf("\tEnter elements of array\t");
	for(i=0;i<n;++i)
		scanf("%d", &arr[i]);
	selection(arr, n);
	printf("\tSelection sorted array :: ");
	for(i=0;i<n;++i)
		printf("%d ", arr[i]);	
	printf("\n");
}

void selection(int arr[], int n){
	int i, j, temp, pos, min;
	for(i=0; i<n-1; ++i){
		min = arr[i];
		pos = i;
		for(j=i; j<n; ++j){
			if(min>arr[j])
				pos = j;
		}
		temp = arr[i];
		arr[i] = arr[pos];
		arr[pos] = temp;
	}
}
