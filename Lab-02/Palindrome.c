// Write a the C program to create an array by inserting N elements in it then 
// print all the numbers which are palindrome number from the array using function.

#include <stdio.h>

int isPalindrome(int num)           // Checking for Palindrome
{
    int rem, rev = 0, temp = num;
    while(num > 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num /10;
    }
    if(rev == temp)
        return 1;
    return 0;
}

int main()
{
	int N;
	printf("How many elements to enter : ");
	scanf("%d", &N);
	
	int arr[N];
	printf("Enter the elements : ");    // Reading N elements.
	for(int i = 0; i < N; i++)
		scanf("%d", &arr[i]);
	
	printf("\nPalindrome Numbers in the array are : ");	
	for(int i = 0; i < N; i++)
	{
	    if(isPalindrome(arr[i]))
	        printf("%d ", arr[i]);
	}
	printf("\n");
	
	return 0;
}
