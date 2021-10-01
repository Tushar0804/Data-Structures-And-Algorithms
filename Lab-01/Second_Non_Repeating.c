// Write a the C program to create an array by inserting N elements in it 
// then find second non repeating element from the array.

#include <stdio.h>

int main()
{
	int N, i, j, cnt = 0;
	printf("How many elements to enter : ");
	scanf("%d", &N);
	
	int arr[N];
	printf("Enter the elements : ");    // Reading N elements.
	for(int i = 0; i < N; i++)
		scanf("%d", &arr[i]);
	
	for(i = 0; i < N; i++)              // Finding Second non-repeating element.
	{
	    for(j = 0; j < N; j++)
	    {
	        if(i != j && arr[i] == arr[j])
	            break;
	    }
	    
	    if(j == N)
	        cnt++;
	        
	    if(cnt == 2)
	    {
	        printf("\nSecond non-repeating element is : %d\n", arr[i]);
			break;
	    }
	}
	
	if(cnt != 2)                        // If Second non-repeating element not found.
		printf("\nSecond non-repeating element is : NULL\n");
		
	return 0;
}
