// Write a program to implement Linear Queue.

#include <stdio.h>
#define MAX 10

void Enqueue(int *, int *, int *);
void Dequeue(int *, int *, int *);
void Display(int *, int *, int *);
void Peek(int *, int *);

int main()
{
    int arr[MAX];
    int front = -1, rear = -1;
    
    printf("Welcome to Queue Operations \n");
    
    while(1)
    {
        printf("\n  1.  Enqueue");
        printf("\n  2.  Dequeue");
        printf("\n  3.  Display");
        printf("\n  4.  Peek");
        printf("\n  0.  Exit");
        
        int ch;
        printf("\nEnter your Choice : ");
        scanf("%d", &ch);
        
        switch(ch)
        {
            case 0:     return 0;
                        break;
            
            case 1:     Enqueue(arr, &front, &rear);
                        break;
            
            case 2:     Dequeue(arr, &front, &rear);
                        break;
            
            case 3:     Display(arr, &front, &rear);
                        break;
            
            case 4:     Peek(arr, &front);
                        break;
            
            default:    printf("\nInvalid Option !!!\n");
                        break;
        }
    }
    return 0;
}

void Enqueue(int *a, int *f, int *r)
{
    if((*r + 1) % MAX == *f)
    {
        printf("\n Queue is Full.\n");
        return;
    }
    int ele;
    printf("\n Enter the element : ");
    scanf("%d", &ele);
    
    *r = (*r + 1) % MAX;
    a[*r] = ele;
    
    if(*f == -1)
        *f = *f + 1;
    printf(" Enqueued Successfully\n");
}

void Dequeue(int *a, int *f, int *r)
{
    if(*f == -1)
    {
        printf("\n Queue is Empty\n");
        return;
    }
    if(*f == *r)
    {
        printf("\n %d is Dequeued Successfully\n", a[*f]);
        *f = -1;
        *r = -1;
        return;
    }
    printf("\n %d is Dequeued Successfully\n", a[*f]);
    *f = (*f + 1) % MAX;
}

void Display(int *a, int *f, int *r)
{
    if(*f == -1)
    {
        printf("\n Queue is Empty\n");
        return;
    }
    int temp = *f;
    printf("\n Queue is : ");
    while(temp != *r)
    {
        printf("%d ", a[temp]);
        temp = (temp+1) % MAX;
    }
    printf("%d \n", a[temp]);
}

void Peek(int *a, int *f)
{
    if(*f == -1)
        printf("\n Queue is Empty\n");
    else
        printf("\n Value at Peek is : %d\n", a[*f]);
}
