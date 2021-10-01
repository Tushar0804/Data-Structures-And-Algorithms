// Write a C program to create an array by inserting N elements in it and then
// delete alternate element from the array.
#include <stdio.h>

int main()
{
	int N;
	printf("How many elements to enter : ");
	scanf("%d", &N);
	
	int arr[N];
	printf("Enter the elements : ");    // Reading N elements.
	for(int i = 0; i < N; i++)
		scanf("%d", &arr[i]);
	

	for(int i = 1; i <= N/2; i++)      // Deleting odd index numbers and shifting.
	{
		for(int j = i; j < N-i; j++)
			arr[j] = arr[j+1];
	}
	
	printf("\nElements after alternate deletion are : ");
	for(int i = 0; i < N-N/2; i++)
		printf("%d ", arr[i]);
		
	printf("\n");
	return 0;
}
