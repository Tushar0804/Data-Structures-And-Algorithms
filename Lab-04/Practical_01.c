// Write a C program to Implementation Stack Using Array.

#include <stdio.h>

void push(int *, int *, int, int);
void pop(int *, int *);
void peek(int *, int);
void display(int *, int);

int main()
{
    int N, choice, num;
    printf("Welcome to Stack Operations");
    printf("\nEnter the size of Stack : ");     // inputting size of stack
    scanf("%d", &N);
    
    int arr[N], top = -1;
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
			            push(arr, &top, N, num);
				        break;
				
			case 2:     pop(arr, &top);                     // POP
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

void push(int *a, int *top, int N, int ele)
{
    if(*top == N-1)
        printf("Cannot PUSH.....Stack is Full.\n");
    else
    {
        *top = *top + 1;
        a[*top] = ele;
        printf("PUSHED Successfully\n");
    }
}

void pop(int *a, int *top)
{
    if(*top == -1)
        printf("\nCannot POP.....Stack is Empty.\n");
    else
    {
        printf("\n%d POPED Successfully\n", a[*top]);
        *top = *top - 1;
    }
}

void peek(int *a, int top)
{
    if(top == -1)
        printf("\nElement at the PEEK is : NULL\n");
    else
        printf("\nElement at the PEEK is : %d\n", a[top]);
}

void display(int *a, int top)
{
    printf("\nElements in the Stack are : ");
    for(int i = 0; i <= top; i++)
        printf("%d ", a[i]);
}
