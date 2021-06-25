#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void insertion_sort(int array[], int);
void main()
{
	int *arr, n;
	printf("How many elements : ");
	scanf("%d", &n);
	arr = (int*)malloc(n*sizeof(int));

	printf("enter elements : ");
	for (int i = 0; i<n; i++)
		scanf("%d", arr+i);

	insertion_sort(arr, n);

	printf("Sorted Array is  : ");
	for (int i = 0; i < n; i++)
		printf("%d ", *(arr+i));

	_getch();
}
void insertion_sort(int *arr, int x)
{
	int i, key, j;
	for (i = 1; i < x; i++)
	{
		key = *(arr+i);
		j = i - 1;

		while (j >= 0 && *(arr+j) > key)
		{
			*(arr+j+1) = *(arr+j);
			j--;
		}
		*(arr+j+1) = key;
	}
}