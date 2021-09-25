// Write a the C program to create an array by inserting N elements in it 
// then print all the numbers which are prime number from the array using function.

#include <stdio.h>
#include <math.h>

int isPrime(int num)                        // Checking for Prime
{
    if(num <= 1)                            // for negative numbers return 0
        return 0;
    
    if(num != 2 && num % 2 == 0)            // for numbers which are multiple of 2 return 0    
        return 0;
    
    if(num != 3 && num % 3 == 0)            // for numbers which are multiple of 3 return 0
        return 0;
        
    for(int i = 5; i < sqrt(num); i += 6)   // for numbers which are multiple of prime numbers  return 0
    {
        if(num % i == 0 || num % (i+2) == 0)
            return 0;
    }
    
    return 1;
}
int main()
{
	int N;
	printf("How many elements to enter : ");
	scanf("%d", &N);
	
	int arr[N];
	printf("Enter the elements : ");          // Reading N elements.
	for(int i = 0; i < N; i++)
		scanf("%d", &arr[i]);
	
	printf("\nPrime Numbers in the array are : ");	
	for(int i = 0; i < N; i++)
	{
	    if(isPrime(arr[i]))
	        printf("%d ", arr[i]);
	}
	printf("\n");
	
	return 0;
}
