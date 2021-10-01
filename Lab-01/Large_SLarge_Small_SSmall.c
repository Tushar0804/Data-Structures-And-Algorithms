// Write a C program to create an array by inserting  N elements in it and then
// find  largest, second largest, smallest and second smallest element from the array.

#include <stdio.h>
#include <limits.h>

int main()
{
	int N, big, small, s_big, s_small;
	printf("How many elements to enter : ");
	scanf("%d", &N);
	
	int arr[N];
	printf("Enter the elements : ");    // Reading integers in the array.
	for(int i = 0; i < N; i++)
		scanf("%d", &arr[i]);
	
	
	big = s_big = INT_MIN;
	small = s_small = INT_MAX;
	
	for(int i = 0; i < N; i++)
	{
		if(arr[i] > big)
		{
		    s_big = big;
		    big = arr[i];
		}
		else if(arr[i] > s_big && arr[i] < big)
			s_big = arr[i];
			
			
		if(arr[i] < small)
		{
		    s_small = small;
		    small = arr[i];
		}
		else if(arr[i] < s_small && arr[i] > small)
			s_small = arr[i];
	}
	
	
	printf("\nLargest Number is : %d", big);
	printf("\nSecond Largest Number is : %d", s_big);
	printf("\nSmallest Number is : %d", small);
	printf("\nSecond Smallest Number is : %d\n", s_small);
	
	return 0;
}

