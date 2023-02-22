#include<stdio.h>
#define MAX 10

int top = -1;
int stack[MAX];

int isempty()
{

    if (top == -1)
        return 1;
    else
        return 0;
}

int isfull()
{

    if (top == MAX)
        return 1;
    else
        return 0;
}

int push(int data)
{
    if(!isfull())
    {
        top = top + 1;
        stack[top] = data;
    }
    else
    {
        printf("\nOverfollow\n");
    }
}

int pop()
{
    int data;
    if(!isempty())
    {
        data = stack[top];
        top = top - 1;
        return data;
    }
}

int main()
{
    int i,number,count=0;
    printf("\nEnter the data to be pushed (to exit enter -1) : ");
    while(i != -1)
    {
        scanf("%d",&number);
        if(number != -1)
        {
            push(number);
            count++;
        }
        else
        {
            i = 0;
            break;
        }
    }
    int arr[count];
    for(i=0;i<count;i++)
    {
        arr[i] = pop();
    }
    for (int step = 1; step < count; step++)
    {
        int key = arr[step];
        int j = step - 1;
        while (key < arr[j] && j >= 0)
        {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
    printf("Array is : ");
    for (i = 0; i < count; i++)
    {
        printf("%d ", arr[i]);
    }
}