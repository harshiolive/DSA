#include <stdio.h> 
#include <stdlib.h>
struct node 
{
   int info;
   struct node *link; 
};

struct node *head; 
int count = 0;

void create_a4(int n) 
{
    struct node *N, *M; int i = 0;
    while (i < n)
    {
        if (head == NULL)
        {
            N = (struct node *)malloc(sizeof(struct node)); printf("Enter the info 1st node: "); 
            scanf("%d", &N->info);
            N->link = NULL;
            head = N; 
        }
        else
        {
            printf("Enter info of %d node: ", i + 1);
            M = (struct node *)malloc(sizeof(struct node)); 
            scanf("%d", &M->info);
            N->link = M;
            M->link = NULL;
            N = M;
        }
        i++; 
    }
}

void display_a4()
{
    struct node *temp;
    for (temp = head; temp != NULL; temp = temp->link)
    printf("%d ", temp->info); printf("\n");
}

int palin_check (struct node *p, int count) 
{
    int i = 0, j;
    struct node *front, *rear;
    while (i != count / 2)
    {
        front = rear = p;
        for (j = 0; j < i; j++)
        {
            front = front->link;
        }
        for (j = 0; j < count - (i + 1); j++) 
        rear = rear->link;
        if (front->info != rear->info)
        return 0;
        else
        i++;
    }

return 1;
}

int main()
{
    int n, key,res;
    printf("Enter the number of nodes: "); 
    scanf("%d", &n);
    create_a4(n);
    printf("\nList entered is: ");
    display_a4();
    res = palin_check(head,n);
    if(res)
    printf("\nPalindrome List.");
    else
    printf("\nNot a Palindrome list.");
    return 0;
}
