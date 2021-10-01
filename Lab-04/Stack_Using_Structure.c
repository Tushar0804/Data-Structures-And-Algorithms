//   Write a C program to Implementation Stack Using following structure definition.
//   struct number 
//   {        int data;
//   };
//   void main()
//     {      struct number arr[10];
//             int top=-1;
//     }

#include <stdio.h>
#define MAX 10

typedef struct number 
{
    int data;
}numb;


void push(numb *, int *, int, int);
void pop(numb *, int *);
void peek(numb *, int);
void display(numb *, int);


int main()
{
    int choice, num;
    printf("Welcome to Stack Operations");
   
    numb arr[MAX];
    int top = -1;
    do
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
			case 0:
			    break;
			    
			case 1:     printf("\nEnter an element : ");
			            scanf("%d", &num);
			            push(arr, &top, MAX, num);
				        break;
				
			case 2:     pop(arr, &top);
				        break;
				
			case 3:     peek(arr, top);
				        break;
				
			case 4:     display(arr, top);
				        break;
				
			default:printf("\nInvalid Option !!!\n");
				break;
		}
	}while(choice);
}

void push(numb *a, int *top, int N, int ele)
{
    if(*top == N-1)
        printf("Cannot PUSH.....Stack is Full.\n");
    else
    {
        *top = *top + 1;
        a[*top].data = ele;
        printf("PUSHED Successfully\n");
    }
}

void pop(numb *a, int *top)
{
    if(*top == -1)
        printf("\nCannot POP.....Stack is Empty.\n");
    else
    {
        printf("\n%d POPED Successfully\n", a[*top].data);
        *top = *top - 1;
    }
}

void peek(numb *a, int top)
{
    if(top == -1)
        printf("\nElement at the PEEK is : NULL\n");
    else
        printf("\nElement at the PEEK is : %d\n", a[top].data);
}

void display(numb *a, int top)
{
    printf("\nElements in the Stack are : ");
    for(int i = 0; i <= top; i++)
        printf("%d ", a[i].data);
}
