// Write a program to implement Circular Queue.
// Tushar Sharma 20011908 Sec-A

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
    if ((*r == MAX - 1 && *f == 0) || (*r == *f -1))
    {
        printf("\n Queue is Full.\n");
        return;
    }

    
    int ele;
    printf("\n Enter the element : ");
    scanf("%d", &ele);
        
    if (*f == -1)
    {
        *f = 0;
        *r = 0;
        a[*r] = ele;
    }
    else if (*r == MAX - 1 && *f != 0)
    {
        *r = 0;
        a[*r] = ele;
    }
    else
    {
        *r = *r + 1;
        a[*r] = ele;
    }
    printf(" Enqueued Successfully\n");
}

void Dequeue(int *a, int *f, int *r)
{
    if(*f == -1)
    {
        printf("\n Queue is Empty\n");
        return;
    }
    
    int ele = a[*f];
    if(*f == *r)
    {
        *f = -1;
        *r = -1;
        return;
    }
    else if (*f == MAX-1)
        *f = 0;
    else
        *f = *f + 1;
        
    printf("\n %d is Dequeued Successfully\n", ele);
}

void Display(int *a, int *f, int *r)
{
    if(*f == -1)
    {
        printf("\n Queue is Empty\n");
        return;
    }
    
    printf("\n Queue is : ");
    if (*r >= *f)
    {
        for (int i = *f; i <= *r; i++)
            printf("%d ", a[i]);
    }
    else
    {
        for (int i = *f; i < MAX; i++)
            printf("%d ", a[i]);
 
        for (int i = 0; i <= *r; i++)
            printf("%d ", a[i]);
    }
    printf("\n");
}

void Peek(int *a, int *f)
{
    if(*f == -1)
        printf("\n Queue is Empty\n");
    else
        printf("\n Value at Peek is : %d\n", a[*f]);
}