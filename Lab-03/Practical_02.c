// Write a C program Create a Dynamic array and then
// Reverse the array and then finally print the array [use function].

#include <stdio.h>
#include <stdlib.h>

void RevArray(int *a, int N)        // Reversing the array.
{
	for(int i = 0; i < N/2; i++)
	{
		int temp = *(a+i);
		*(a+i) = *(a+N-1-i);
		*(a+N-1-i) = temp;
	}
}

int main()
{
	int N;
	printf("How many numbers to enter : ");
	scanf("%d", &N);
	
	int *arr = (int *)calloc(N, sizeof(int));
	
	printf("Enter the numbers : ");
	for(int i = 0; i < N; i++)
		scanf("%d", &arr[i]);
	
	RevArray(arr, N);
	
	printf("\nArray after reversing is : ");
	for(int i = 0; i < N; i++)
		printf("%d ", arr[i]);
	
	printf("\n\n");
	return 0;
}
