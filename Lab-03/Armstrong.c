// Write a the C program to create an array by inserting N elements in it then
// print all the numbers which are Armstrong number from the array [use function]. 

#include <stdio.h>

int isArmstrong(int num)    // Checking for Armstrong numbers
{
	if(num < 0)
		return 0;
	
	int temp = num, rem, sum = 0;
	while(num != 0)
	{
		rem = num % 10;
		sum += rem * rem * rem;
		num = num / 10;
	}
	if(sum == temp)
		return 1;
	return 0;
}

int main()
{
	int N;
	printf("How many numbers to enter : ");
	scanf("%d", &N);
	
	int arr[N];
	printf("Enter the numbers : ");         // Reading numbers in the array
	for(int i = 0; i < N; i++)
		scanf("%d", &arr[i]);
	
	printf("\nArmstrong Numbers in the array are : ");
	for(int i = 0; i < N; i++)
	{
		if(isArmstrong(arr[i]))
			printf("%d ", arr[i]);
	}
	printf("\n\n");
	return 0;
}
