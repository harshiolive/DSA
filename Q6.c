#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of the array:");
    scanf("%d", &n);
    int a[n];
    printf("\nEnter 0 and 1 in random order:");
    for(int i=0;i<n;i++)
    scanf("%d", &a[i]);

    for(int j=0;j<n;j++)
    {
        if(a[j]==0)
        printf("%d ", a[j]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==1)
        printf("%d ",a[i]);
    }
    return 0;
}