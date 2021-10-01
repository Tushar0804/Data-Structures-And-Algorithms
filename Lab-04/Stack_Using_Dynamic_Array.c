// Write a C program to Implementation Stack Using Dynamic Array.
// Tushar Sharma 20011908 Sec-A

#include <stdio.h>
#include <stdlib.h>

int* push(int *, int *, int);
int* pop(int *, int *);
void peek(int *, int);
void display(int *, int);

int main()
{
    int choice, num;
    printf("Welcome to Stack Operations");

    int *arr = NULL;
    int top = -1;
    do                                          // MENU DRIVEN PROGRAM
	{
		
		printf("\n  1. PUSH");
		printf("\n  2. POP");
		printf("\n  3. PEEK");
		printf("\n  4. DISPLAY");
		printf("\n  0. Exit");
		printf("\nEnter your choice : ");
		scanf("%d", &choice);
		
		switch(choice)
		{
			case 0:                                         // To exit
			            break;
			    
			case 1:     printf("\nEnter an element : ");    // PUSH
			            scanf("%d", &num);
			            arr = push(arr, &top, num);
				        break;
				
			case 2:     arr = pop(arr, &top);                     // POP
				        break;
				
			case 3:     peek(arr, top);                     // PEEK
				        break;
				
			case 4:     display(arr, top);                  // DISPLAY
				        break;
				
			default:    printf("\nInvalid Option !!!\n");
				        break;
		}
	}while(choice);
}

int* push(int *stack, int *top, int ele)
{
    int *ptr = NULL;
    if(*top == -1)
        ptr = (int *) calloc(1, sizeof(int));
    else
        ptr = (int *) realloc(stack, (*top + 1) * sizeof(int));
    
    if(ptr == NULL)
        printf("\nMemory is Full...Cannot enter any element in the stack\n");
    else
    {
        *top = *top + 1;
        stack = ptr;
        stack[*top] = ele;
        printf("\nPushed Successfully\n");
    }
    return stack;
}   

int* pop(int *stack, int *top)
{
    if(*top == -1)
        printf("\nCannot POP.....Stack is Empty.\n");

    else
    {
        int *ptr = NULL;
        printf("\n%d POPED Successfully\n", stack[*top]);
        *top = *top - 1;
        
        if(*top != -1)
            ptr = (int *) realloc(stack, (*top + 1) * sizeof(int));
        stack = ptr;
    }
    return stack;
}

void peek(int *a, int top)
{
    if(top == -1)
        printf("\nElement at the PEEK is : NULL\n");
    else
        printf("\nElement at the PEEK is : %d\n", a[top]);
}

void display(int *stack, int top)
{
    printf("\nElements in the Stack are : ");
    for(int i = 0; i <= top; i++)
        printf("%d ", stack[i]);
}
